#!/usr/bin/env python

from __future__ import print_function
from googleapiclient.discovery import build
from httplib2 import Http
from oauth2client import file, client, tools

import rosbag
import rospy
import random
import serial
from std_msgs.msg import Int32, String

import shlex
import time
import commands
import subprocess
import os
import signal

# If modifying these scopes, delete the file token.json.
SCOPES = 'https://www.googleapis.com/auth/drive.metadata.readonly'

DEBUG = 1

BAGNAME_1 = 'recordbag1'
BAGNAME_2 = 'recordbag2'
BAG1SCRIPT = 'bag1script.bash'
BAG2SCRIPT = 'bag2script.bash'

SLIGHT_MIN = 30
SLIGHT_MAX = 80
CONDITION = 1
KPORT1 = '/dev/ttyUSB4'
KPORT2 = '/dev/ttyUSB1'
KPORT3 = '/dev/ttyUSB2'
FOLDER_ID ="'12qzzgRpqDpNeDhVWWTxxhPLenUd2Xp_S'"

FILL = (0,0,0,0,0,0)
LOOKANGLE = (120,179,150)

CHECKNAME_1 = '0check.png'
CHECKNAME_2 = '1check.png'

#https://answers.ros.org/question/10714/start-and-stop-rosbag-within-a-python-script/
def terminate_ros_node(s):
	# kills recording rosnodes.
	list_cmd = subprocess.Popen("rosnode list", shell=True, stdout=subprocess.PIPE)
	list_output = list_cmd.stdout.read()
	retcode = list_cmd.wait()
	assert retcode == 0, "List command returned %d" % retcode
	for str in list_output.split("\n"):
		if (str.startswith(s)):
			os.system("rosnode kill " + str)

def slight(f):
# takes in a number from 0 to 180 and randomly 
# changes it by SLIGHT_MIN to SLIGHT_MAX in either direction
	if f == 179:
		direction = 0
	elif f == 1:
		direction = 1
	else:
		direction = (int)(2*random.random())
	
	increment = SLIGHT_MIN + (int)((SLIGHT_MAX-SLIGHT_MIN)*random.random())
	if direction == 0:
		# decrease value
		return max(1, f - increment)
	else:
		return min(179, f + increment)


def idle(f1,f2,f3):
	# give three new slightly adjusted positions:
	return (slight(f1),slight(f2),slight(f3))

def move_keepon(ser, n1, n2, n3):
	s = '%03d' % n1
	s += '%03d' % n2
	s += '%03d' % n3
	s += '00\0' 
	ser.write(s)
	time.sleep(0.1)
	ser.write(s)

def move_idly(angles, s1, s2=None, s3=None):
	if DEBUG==1:
		print("moving idly with angles:")
		print(angles)
	
	a1, a2, a3 = angles[0:3]
	b1,b2,b3,c1,c2,c3 = FILL
	if CONDITION != 1:
		b1,b2,b3,c1,c2,c3 = angles[3:9]

	whichkeepon = (int)(5*random.random())
	if CONDITION == 1:
		if whichkeepon < 3:
			a1, a2, a3 = idle(a1, a2, a3)
 			move_keepon(s1,a1,a2,a3)
	else:
		if whichkeepon==1:
			a1, a2, a3 = idle(a1, a2, a3)
	 		move_keepon(s1,a1,a2,a3)
		elif whichkeepon==2:
			b1, b2, b3 = idle(b1, b2, b3)
			move_keepon(s2,b1,b2,b3)
		elif whichkeepon==3:
			c1, c2, c3 = idle(c1, c2, c3)
			move_keepon(s3,c1,c2,c3)
	sleeptime = 1
	if CONDITION==1:
		sleeptime = sleeptime + (int)(2*random.random())
	else:
		sleeptime = sleeptime + (int)(random.random())
	time.sleep(sleeptime)
	angles = (a1,a2,a3,b1,b2,b3,c1,c2,c3)
	return angles

def move_look(angles, s1, s2=None, s3=None):
	a1, a2, a3 = angles[0:3]
	b1,b2,b3,c1,c2,c3 = FILL
	j1, j2, j3 = LOOKANGLE
	#give time for motors to be available
	time.sleep(2)
	#debug
	if DEBUG==1:
		print("movelooking")

	if CONDITION != 1:
		b1,b2,b3,c1,c2,c3 = angles[3:9]

	if CONDITION==1:
		move_keepon(s1, j1, j2, j3)
		time.sleep(30)		
		move_keepon(s1, a1, a2, a3)

	if CONDITION==2:
		#unison
		move_keepon(s1, j1, j2, j3)
		move_keepon(s2, j1, j2, j3)
		move_keepon(s3, j1, j2, j3)
		time.sleep(30)
		move_keepon(s1, a1, a2, a3)
		move_keepon(s2, b1, b2, b3)
		move_keepon(s3, c1, c2, c3)

	if CONDITION==3:
		#sequence
		move_keepon(s1, j1, j2, j3)
		time.sleep(2)
		move_keepon(s2, j1, j2, j3)
		time.sleep(2)
		move_keepon(s3, j1, j2, j3)
		time.sleep(26)
		move_keepon(s1, a1, a2, a3)
		time.sleep(2)
		move_keepon(s2, b1, b2, b3)
		time.sleep(2)
		move_keepon(s3, c1, c2, c3)
	# this has to actually move while rosbag record is running
	angles = (a1, a2, a3, b1, b2, b3, c1, c2, c3)
	return angles

def drive_check(checkname):
	store = file.Storage('token.json')
	creds = store.get()
	if not creds or creds.invalid:
		flow = client.flow_from_clientsecrets('credentials.json', SCOPES)
		creds = tools.run_flow(flow, store)
	service = build('drive', 'v3', http=creds.authorize(Http()))

	# Call the Drive v3 API
	results = service.files().list(
		q=FOLDER_ID + " in parents and trashed = false", pageSize=10, fields="nextPageToken, files(id, name)").execute()
	items = results.get('files', [])
	if DEBUG == 1:
		print(items)

	if not items:
		#debug
		if DEBUG==1:
			print("not items")
		return 0
	else:
		for item in items:
			if DEBUG==1:
				print(item['name'])
			if item['name'] == checkname:
				return 1
		return 0

def gazer():
#	store = file.Storage('token.json')
#	creds = store.get()
#	if not creds or creds.invalid:
#		flow = client.flow_from_clientsecrets('credentials.json', SCOPES)
#		creds = tools.run_flow(flow, store)
#	service = build('drive', 'v3', http=creds.authorize(Http()))

	pub = rospy.Publisher("chatter", String, queue_size=10)
	rospy.init_node("gazer", anonymous=True)
	rate = rospy.Rate(5) # 5hz
	checkname = CHECKNAME_1
	bagname = BAGNAME_1

	#keepon angles
	a1=90
	a2=90
	a3=90
	b1=90
	b2=90
	b3=90
	c1=90
	c2=90
	c3=90
	angles=(a1,a2,a3,b1,b2,b3,c1,c2,c3)
	serial1, serial2, serial3 = 0, 0, 0
	serial1 = serial.Serial(KPORT1, 9600, timeout = 1)

	if CONDITION != 1:
		serial2 = serial.Serial(KPORT2, 9600, timeout = 1)
		serial3 = serial.Serial(KPORT3, 9600, timeout = 1)
	while not rospy.is_shutdown():
		#debug
		if DEBUG==1:
			print("I'm about to drivecheck")
			dc = drive_check(checkname)
			print(str(dc))
		while drive_check(checkname) == 0:
			for i in range(0,5):
				#debug
				if DEBUG==1:
					print("drive didn't find " + checkname)
				if CONDITION==1:
					angles = move_idly(angles, serial1)
				else:
					angles = move_idly(angles, serial1, s2=serial2, s3=serial3)
		
		#adjust checks
		if DEBUG==1:
			print(checkname + " " + CHECKNAME_1 + " " + CHECKNAME_2)
		if checkname == CHECKNAME_1:
			checkname = CHECKNAME_2
		else:
			checkname = "Done"
		#debug
		if DEBUG==1:
			print("my check is " + checkname)

		#RECORD!!!
		#debug
		if DEBUG==1:
			print("recording now")

		script = BAG1SCRIPT
		if checkname == 'Done':
			script = BAG2SCRIPT

		command = "source " + script
		recorder =  subprocess.Popen(command, stdin=subprocess.PIPE, shell=True, cwd='/home/david/keepon_ws/', executable='/bin/bash')

		timestampstring = String()
		timestampstring.data = "beginning look at %s for" % rospy.get_time() + checkname
		pub.publish(timestampstring)
		
		ts_bag = rosbag.Bag('look_timestamps.bag', 'w')
		ts_bag.write('chatter', timestampstring)
		ts_bag.close()

		if CONDITION==1:
			angles = move_look(angles, serial1)
		else:
			angles = move_look(angles, serial1, s2=serial2, s3=serial3)
		
		#stop recording:
		#debug
		if DEBUG==1:
			print("stop recording now")

		terminate_ros_node("/record")
		
		#debug
		if DEBUG==1:
			print("I am about to ratesleep")
		rate.sleep()

if __name__ == '__main__':
	try:
		gazer()
	except rospy.ROSInterruptException:
		pass
