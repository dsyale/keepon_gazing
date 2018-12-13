#protocol


Make sure that no bag files are present in keepon_ws, and clear the Google Drive folder that is being used to store the 'checking files'.
Connect the Keepons to the machine and make sure that the KPORT_(number) variables in gazer.py are set to the appropriate usbport names. Also, set the CONDITION variable in gazer.py to the desired condition.

Before the participant arrives, start the camera rosnodes:

~~~~
roscore
roscd libuvc_camera/launch
roslaunch file.launch
~~~~

While the participant is completing the pre-experimental survey (after signing any relevant consent forms), run the gazer node:

~~~~
rosrun keepon_gazing gazer.py
~~~~

Minimize all windows if the machine will be within the view of the participant (or if the participant will be completing the distraction tasks on this machine). The participant may then enter the room and be directed complete the distraction tasks (a pair of headphones playing background white noise to mask the sound of the Keepons moving may be advisable--for reference, the audio from this video was used: https://www.youtube.com/watch?v=d0tU18Ybcvk).

After the participant is completed with the experiment, direct them out of the room to complete the post-experimental survey.

AFter the experiment is conlcuded, one may close the gazer node, and clean up any residual nodes with:

~~~~
rosnode cleanup
~~~~

Delete the google drive checking files in the folder you have set up for this purpose.
The two created bag files, 'rosrecord1.bag' and 'rosrecord2.bag' in the keepon_Ws directory housing the recordings around the gaze direction periods may be moved to another directory for storage, as well as the 'look_timestamps.bag' bagfile containing the timestamps preceding the initiation of the gaze direction cues. 

The recorded images may be exported to mp4 format as follows: first, if the bagfiles have been stored elsewhere, move them to the keepon_ws directory (one may also edit the directory in the export.launch launch file in keepon_gazing). 

Make a directory to house the exported files. For refernce, `~/test` will be used.
~~~~
cd ~
mkdir test
~~~~

Before exporting, close the camera node.

Then, export the images from rosrecord1.bag to jpg. (Make sure that export.launch has "file" set to "rosrecord1").
~~~~
roscd keepon_gazing/launch
roslaunch export.launch
cd ~
mv ~/.ros/frame*.jpg ~/test
cd test
ffmpeg -framerate 20 -i frame%04d.jpg -c:v libx264 -profile:v high -crf 20 -pix_fmt yuv420p output.mp4
rm frame*.jpg
~~~~
Replace output.mp4 above with your desired filename.

Repeat the process above for rosrecord2.bag, making sure that export.launch in keepon_gazing has "file" set to "rosrecord2".

