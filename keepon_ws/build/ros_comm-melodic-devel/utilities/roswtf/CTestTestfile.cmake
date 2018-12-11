# CMake generated Testfile for 
# Source directory: /home/david/keepon_ws/src/ros_comm-melodic-devel/utilities/roswtf
# Build directory: /home/david/keepon_ws/build/ros_comm-melodic-devel/utilities/roswtf
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_roswtf_rostest_test_roswtf.test "/home/david/keepon_ws/build/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/david/keepon_ws/build/test_results/roswtf/rostest-test_roswtf.xml" "--return-code" "/home/david/keepon_ws/src/ros_comm-melodic-devel/tools/rostest/scripts/rostest --pkgdir=/home/david/keepon_ws/src/ros_comm-melodic-devel/utilities/roswtf --package=roswtf --results-filename test_roswtf.xml --results-base-dir \"/home/david/keepon_ws/build/test_results\" /home/david/keepon_ws/src/ros_comm-melodic-devel/utilities/roswtf/test/roswtf.test ")
add_test(_ctest_roswtf_nosetests_test "/home/david/keepon_ws/build/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/david/keepon_ws/build/test_results/roswtf/nosetests-test.xml" "--return-code" "/usr/bin/cmake -E make_directory /home/david/keepon_ws/build/test_results/roswtf" "/usr/bin/nosetests-2.7 -P --process-timeout=60 --where=/home/david/keepon_ws/src/ros_comm-melodic-devel/utilities/roswtf/test --with-xunit --xunit-file=/home/david/keepon_ws/build/test_results/roswtf/nosetests-test.xml")
