# CMake generated Testfile for 
# Source directory: /home/david/keepon_ws/src/ros_comm-melodic-devel/test/test_rosbag
# Build directory: /home/david/keepon_ws/build/ros_comm-melodic-devel/test/test_rosbag
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_test_rosbag_nosetests_test.test_bag.py "/home/david/keepon_ws/build/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/david/keepon_ws/build/test_results/test_rosbag/nosetests-test.test_bag.py.xml" "--return-code" "/usr/bin/cmake -E make_directory /home/david/keepon_ws/build/test_results/test_rosbag" "/usr/bin/nosetests-2.7 -P --process-timeout=60 /home/david/keepon_ws/src/ros_comm-melodic-devel/test/test_rosbag/test/test_bag.py --with-xunit --xunit-file=/home/david/keepon_ws/build/test_results/test_rosbag/nosetests-test.test_bag.py.xml")
add_test(_ctest_test_rosbag_gtest_test_bag "/home/david/keepon_ws/build/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/david/keepon_ws/build/test_results/test_rosbag/gtest-test_bag.xml" "--return-code" "/home/david/keepon_ws/devel/lib/test_rosbag/test_bag --gtest_output=xml:/home/david/keepon_ws/build/test_results/test_rosbag/gtest-test_bag.xml")
add_test(_ctest_test_rosbag_rostest_test_play_play.test "/home/david/keepon_ws/build/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/david/keepon_ws/build/test_results/test_rosbag/rostest-test_play_play.xml" "--return-code" "/home/david/keepon_ws/src/ros_comm-melodic-devel/tools/rostest/scripts/rostest --pkgdir=/home/david/keepon_ws/src/ros_comm-melodic-devel/test/test_rosbag --package=test_rosbag --results-filename test_play_play.xml --results-base-dir \"/home/david/keepon_ws/build/test_results\" /home/david/keepon_ws/build/ros_comm-melodic-devel/test/test_rosbag/test/play_play.test ")
add_test(_ctest_test_rosbag_rostest_test_rosbag_play.test "/home/david/keepon_ws/build/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/david/keepon_ws/build/test_results/test_rosbag/rostest-test_rosbag_play.xml" "--return-code" "/home/david/keepon_ws/src/ros_comm-melodic-devel/tools/rostest/scripts/rostest --pkgdir=/home/david/keepon_ws/src/ros_comm-melodic-devel/test/test_rosbag --package=test_rosbag --results-filename test_rosbag_play.xml --results-base-dir \"/home/david/keepon_ws/build/test_results\" /home/david/keepon_ws/build/ros_comm-melodic-devel/test/test_rosbag/test/rosbag_play.test ")
add_test(_ctest_test_rosbag_rostest_test_latched_pub.test "/home/david/keepon_ws/build/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/david/keepon_ws/build/test_results/test_rosbag/rostest-test_latched_pub.xml" "--return-code" "/home/david/keepon_ws/src/ros_comm-melodic-devel/tools/rostest/scripts/rostest --pkgdir=/home/david/keepon_ws/src/ros_comm-melodic-devel/test/test_rosbag --package=test_rosbag --results-filename test_latched_pub.xml --results-base-dir \"/home/david/keepon_ws/build/test_results\" /home/david/keepon_ws/src/ros_comm-melodic-devel/test/test_rosbag/test/latched_pub.test ")
add_test(_ctest_test_rosbag_rostest_test_latched_sub.test "/home/david/keepon_ws/build/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/david/keepon_ws/build/test_results/test_rosbag/rostest-test_latched_sub.xml" "--return-code" "/home/david/keepon_ws/src/ros_comm-melodic-devel/tools/rostest/scripts/rostest --pkgdir=/home/david/keepon_ws/src/ros_comm-melodic-devel/test/test_rosbag --package=test_rosbag --results-filename test_latched_sub.xml --results-base-dir \"/home/david/keepon_ws/build/test_results\" /home/david/keepon_ws/build/ros_comm-melodic-devel/test/test_rosbag/test/latched_sub.test ")
add_test(_ctest_test_rosbag_rostest_test_record_two_publishers.test "/home/david/keepon_ws/build/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/david/keepon_ws/build/test_results/test_rosbag/rostest-test_record_two_publishers.xml" "--return-code" "/home/david/keepon_ws/src/ros_comm-melodic-devel/tools/rostest/scripts/rostest --pkgdir=/home/david/keepon_ws/src/ros_comm-melodic-devel/test/test_rosbag --package=test_rosbag --results-filename test_record_two_publishers.xml --results-base-dir \"/home/david/keepon_ws/build/test_results\" /home/david/keepon_ws/src/ros_comm-melodic-devel/test/test_rosbag/test/record_two_publishers.test ")
add_test(_ctest_test_rosbag_rostest_test_record_one_publisher_two_topics.test "/home/david/keepon_ws/build/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/david/keepon_ws/build/test_results/test_rosbag/rostest-test_record_one_publisher_two_topics.xml" "--return-code" "/home/david/keepon_ws/src/ros_comm-melodic-devel/tools/rostest/scripts/rostest --pkgdir=/home/david/keepon_ws/src/ros_comm-melodic-devel/test/test_rosbag --package=test_rosbag --results-filename test_record_one_publisher_two_topics.xml --results-base-dir \"/home/david/keepon_ws/build/test_results\" /home/david/keepon_ws/src/ros_comm-melodic-devel/test/test_rosbag/test/record_one_publisher_two_topics.test ")
subdirs("bag_migration_tests")
