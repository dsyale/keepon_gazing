// Attribution: the Museum Keepon Project at: http://hennyadmoni.com/keepon/

Instructions for hardware setup of Keepon robots can be found at the address above.
The setup used in this experiment was limited to roll, bop, and tilt motions, foregoing the addition of the pan motor base.

Commands can be issued to the Keepon robots to the serial port of the connected Arduinos in the form of command strings.
Command strings are of the form ppptttrrrbb, where ppp, ttt, and rrr are 3-digit motor positions (from 0 to 180) for pan, tilt, and roll, respectively. bb is a 2-digit value indicating the desired (approximate) number of bops.

Once the Arduino and the motors are properly connected, FullServoKeepon.ino can be uploaded to the Arduino.
Commands can be issued over the serial port, for example with python, the commands would be as follows:

~~~~
KEEPON_PORT = '/dev/ttyUSB1' 
# note: the port name above may vary depending on your operating system and your USB connections.

import serial

ser = serial.Serial(KEEPON_PORT, 9600, timeout=1

ser.write('09009009000\0')
~~~~

The above should tell the Keepon to move all of its motors to the middle position.
