#google_drive_scripts

For each of the two google forms housing the first two of the three surveys in the distraction task, an action script was added, including installable triggers that created image files in a particular folder in my Google Drive. A function in gazer.py (drive_check()) was responsible for requesting the Google Drive REST API to get information about whether these files existed in the given folder. By replacing the folder id within the scripts and also within gazer.py, one can use these scripts with one's own Google Drive. The appropriate permissions and authentication must be provided while implementing the scripts, and the appropriate APIs must be enabled.

More information can be found at:

https://developers.google.com/apps-script/guides/triggers/installable
https://developers.google.com/drive/api/v3/quickstart/python (or: https://developers.google.com/drive/api/v3/about-sdk)

Note that in setting up gazer.py to work with one's google drive, one must 
