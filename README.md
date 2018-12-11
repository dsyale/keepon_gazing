# keepon_gazing

This repository includes the code used to run the Keepon Gazing project, investigating the influence of robot group size and group behavior on gaze cueing effects on humans. Information about the Keepon Gazing project can be found in project_report.pdf.

'keepon_ws' is a copy of the ros workspace used to control the Keepon behavior and record video footage from a USB-connected webcam. The ros-melodic distribution was used, and the packages libuvc_camera and rosbag were installed, as well as all dependencies. One launch file, 'file.launch' was written for libuvc_camera's camera_node, in order to initiate video streaming from the webcam. This can be found under keepon_ws/src/libuvc_ros-master/libuvc_camera/launch/file.launch. Documentation for the template launch file as well as instructions for installatoin and setup can be found at: http://wiki.ros.org/libuvc_camera. Video was recorded with a Logitech HD C615 webcam.

The keepon_gazing package was created to house both the video export functionality as well as the python node to control the Keepons and recording behavior. A python node at keepon_ws/src/keepon_gazing/scripts/gazer.py was responsible for controlling the Keepons and initiating recording sequences to capture video of participant reactions to Keepon 'looking' events. This node repeatedly makes requests to the Google Drive API in order to determine whether or not a participant had reached a certain point in a series of tasks including surveys on Google Forms. On two separate occasions, when a participant submits one of the surveys, an action script attached to that form would generate a file in a particular folder in Google Drive. By checking for the existence of files with these names in that particular folder, the gazer.py node is able to determine when a participant reaches a certain stage of the series of tasks. 


'FullServoKeepon' includes the software to be run on the Arduinos connected to each Keepon robot. This code was borrowed from http://hennyadmoni.com/keepon/ and a similar hardware setup was used to power each of three Keepon robots.


