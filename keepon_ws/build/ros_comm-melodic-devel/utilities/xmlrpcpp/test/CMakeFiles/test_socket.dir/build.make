# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/david/keepon_ws/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/david/keepon_ws/build

# Include any dependencies generated for this target.
include ros_comm-melodic-devel/utilities/xmlrpcpp/test/CMakeFiles/test_socket.dir/depend.make

# Include the progress variables for this target.
include ros_comm-melodic-devel/utilities/xmlrpcpp/test/CMakeFiles/test_socket.dir/progress.make

# Include the compile flags for this target's objects.
include ros_comm-melodic-devel/utilities/xmlrpcpp/test/CMakeFiles/test_socket.dir/flags.make

ros_comm-melodic-devel/utilities/xmlrpcpp/test/CMakeFiles/test_socket.dir/test_socket.cpp.o: ros_comm-melodic-devel/utilities/xmlrpcpp/test/CMakeFiles/test_socket.dir/flags.make
ros_comm-melodic-devel/utilities/xmlrpcpp/test/CMakeFiles/test_socket.dir/test_socket.cpp.o: /home/david/keepon_ws/src/ros_comm-melodic-devel/utilities/xmlrpcpp/test/test_socket.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/david/keepon_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object ros_comm-melodic-devel/utilities/xmlrpcpp/test/CMakeFiles/test_socket.dir/test_socket.cpp.o"
	cd /home/david/keepon_ws/build/ros_comm-melodic-devel/utilities/xmlrpcpp/test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/test_socket.dir/test_socket.cpp.o -c /home/david/keepon_ws/src/ros_comm-melodic-devel/utilities/xmlrpcpp/test/test_socket.cpp

ros_comm-melodic-devel/utilities/xmlrpcpp/test/CMakeFiles/test_socket.dir/test_socket.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_socket.dir/test_socket.cpp.i"
	cd /home/david/keepon_ws/build/ros_comm-melodic-devel/utilities/xmlrpcpp/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/david/keepon_ws/src/ros_comm-melodic-devel/utilities/xmlrpcpp/test/test_socket.cpp > CMakeFiles/test_socket.dir/test_socket.cpp.i

ros_comm-melodic-devel/utilities/xmlrpcpp/test/CMakeFiles/test_socket.dir/test_socket.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_socket.dir/test_socket.cpp.s"
	cd /home/david/keepon_ws/build/ros_comm-melodic-devel/utilities/xmlrpcpp/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/david/keepon_ws/src/ros_comm-melodic-devel/utilities/xmlrpcpp/test/test_socket.cpp -o CMakeFiles/test_socket.dir/test_socket.cpp.s

ros_comm-melodic-devel/utilities/xmlrpcpp/test/CMakeFiles/test_socket.dir/test_socket.cpp.o.requires:

.PHONY : ros_comm-melodic-devel/utilities/xmlrpcpp/test/CMakeFiles/test_socket.dir/test_socket.cpp.o.requires

ros_comm-melodic-devel/utilities/xmlrpcpp/test/CMakeFiles/test_socket.dir/test_socket.cpp.o.provides: ros_comm-melodic-devel/utilities/xmlrpcpp/test/CMakeFiles/test_socket.dir/test_socket.cpp.o.requires
	$(MAKE) -f ros_comm-melodic-devel/utilities/xmlrpcpp/test/CMakeFiles/test_socket.dir/build.make ros_comm-melodic-devel/utilities/xmlrpcpp/test/CMakeFiles/test_socket.dir/test_socket.cpp.o.provides.build
.PHONY : ros_comm-melodic-devel/utilities/xmlrpcpp/test/CMakeFiles/test_socket.dir/test_socket.cpp.o.provides

ros_comm-melodic-devel/utilities/xmlrpcpp/test/CMakeFiles/test_socket.dir/test_socket.cpp.o.provides.build: ros_comm-melodic-devel/utilities/xmlrpcpp/test/CMakeFiles/test_socket.dir/test_socket.cpp.o


ros_comm-melodic-devel/utilities/xmlrpcpp/test/CMakeFiles/test_socket.dir/test_system_mocks.c.o: ros_comm-melodic-devel/utilities/xmlrpcpp/test/CMakeFiles/test_socket.dir/flags.make
ros_comm-melodic-devel/utilities/xmlrpcpp/test/CMakeFiles/test_socket.dir/test_system_mocks.c.o: /home/david/keepon_ws/src/ros_comm-melodic-devel/utilities/xmlrpcpp/test/test_system_mocks.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/david/keepon_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object ros_comm-melodic-devel/utilities/xmlrpcpp/test/CMakeFiles/test_socket.dir/test_system_mocks.c.o"
	cd /home/david/keepon_ws/build/ros_comm-melodic-devel/utilities/xmlrpcpp/test && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/test_socket.dir/test_system_mocks.c.o   -c /home/david/keepon_ws/src/ros_comm-melodic-devel/utilities/xmlrpcpp/test/test_system_mocks.c

ros_comm-melodic-devel/utilities/xmlrpcpp/test/CMakeFiles/test_socket.dir/test_system_mocks.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/test_socket.dir/test_system_mocks.c.i"
	cd /home/david/keepon_ws/build/ros_comm-melodic-devel/utilities/xmlrpcpp/test && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/david/keepon_ws/src/ros_comm-melodic-devel/utilities/xmlrpcpp/test/test_system_mocks.c > CMakeFiles/test_socket.dir/test_system_mocks.c.i

ros_comm-melodic-devel/utilities/xmlrpcpp/test/CMakeFiles/test_socket.dir/test_system_mocks.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/test_socket.dir/test_system_mocks.c.s"
	cd /home/david/keepon_ws/build/ros_comm-melodic-devel/utilities/xmlrpcpp/test && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/david/keepon_ws/src/ros_comm-melodic-devel/utilities/xmlrpcpp/test/test_system_mocks.c -o CMakeFiles/test_socket.dir/test_system_mocks.c.s

ros_comm-melodic-devel/utilities/xmlrpcpp/test/CMakeFiles/test_socket.dir/test_system_mocks.c.o.requires:

.PHONY : ros_comm-melodic-devel/utilities/xmlrpcpp/test/CMakeFiles/test_socket.dir/test_system_mocks.c.o.requires

ros_comm-melodic-devel/utilities/xmlrpcpp/test/CMakeFiles/test_socket.dir/test_system_mocks.c.o.provides: ros_comm-melodic-devel/utilities/xmlrpcpp/test/CMakeFiles/test_socket.dir/test_system_mocks.c.o.requires
	$(MAKE) -f ros_comm-melodic-devel/utilities/xmlrpcpp/test/CMakeFiles/test_socket.dir/build.make ros_comm-melodic-devel/utilities/xmlrpcpp/test/CMakeFiles/test_socket.dir/test_system_mocks.c.o.provides.build
.PHONY : ros_comm-melodic-devel/utilities/xmlrpcpp/test/CMakeFiles/test_socket.dir/test_system_mocks.c.o.provides

ros_comm-melodic-devel/utilities/xmlrpcpp/test/CMakeFiles/test_socket.dir/test_system_mocks.c.o.provides.build: ros_comm-melodic-devel/utilities/xmlrpcpp/test/CMakeFiles/test_socket.dir/test_system_mocks.c.o


ros_comm-melodic-devel/utilities/xmlrpcpp/test/CMakeFiles/test_socket.dir/__/src/XmlRpcSocket.cpp.o: ros_comm-melodic-devel/utilities/xmlrpcpp/test/CMakeFiles/test_socket.dir/flags.make
ros_comm-melodic-devel/utilities/xmlrpcpp/test/CMakeFiles/test_socket.dir/__/src/XmlRpcSocket.cpp.o: /home/david/keepon_ws/src/ros_comm-melodic-devel/utilities/xmlrpcpp/src/XmlRpcSocket.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/david/keepon_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object ros_comm-melodic-devel/utilities/xmlrpcpp/test/CMakeFiles/test_socket.dir/__/src/XmlRpcSocket.cpp.o"
	cd /home/david/keepon_ws/build/ros_comm-melodic-devel/utilities/xmlrpcpp/test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/test_socket.dir/__/src/XmlRpcSocket.cpp.o -c /home/david/keepon_ws/src/ros_comm-melodic-devel/utilities/xmlrpcpp/src/XmlRpcSocket.cpp

ros_comm-melodic-devel/utilities/xmlrpcpp/test/CMakeFiles/test_socket.dir/__/src/XmlRpcSocket.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_socket.dir/__/src/XmlRpcSocket.cpp.i"
	cd /home/david/keepon_ws/build/ros_comm-melodic-devel/utilities/xmlrpcpp/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/david/keepon_ws/src/ros_comm-melodic-devel/utilities/xmlrpcpp/src/XmlRpcSocket.cpp > CMakeFiles/test_socket.dir/__/src/XmlRpcSocket.cpp.i

ros_comm-melodic-devel/utilities/xmlrpcpp/test/CMakeFiles/test_socket.dir/__/src/XmlRpcSocket.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_socket.dir/__/src/XmlRpcSocket.cpp.s"
	cd /home/david/keepon_ws/build/ros_comm-melodic-devel/utilities/xmlrpcpp/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/david/keepon_ws/src/ros_comm-melodic-devel/utilities/xmlrpcpp/src/XmlRpcSocket.cpp -o CMakeFiles/test_socket.dir/__/src/XmlRpcSocket.cpp.s

ros_comm-melodic-devel/utilities/xmlrpcpp/test/CMakeFiles/test_socket.dir/__/src/XmlRpcSocket.cpp.o.requires:

.PHONY : ros_comm-melodic-devel/utilities/xmlrpcpp/test/CMakeFiles/test_socket.dir/__/src/XmlRpcSocket.cpp.o.requires

ros_comm-melodic-devel/utilities/xmlrpcpp/test/CMakeFiles/test_socket.dir/__/src/XmlRpcSocket.cpp.o.provides: ros_comm-melodic-devel/utilities/xmlrpcpp/test/CMakeFiles/test_socket.dir/__/src/XmlRpcSocket.cpp.o.requires
	$(MAKE) -f ros_comm-melodic-devel/utilities/xmlrpcpp/test/CMakeFiles/test_socket.dir/build.make ros_comm-melodic-devel/utilities/xmlrpcpp/test/CMakeFiles/test_socket.dir/__/src/XmlRpcSocket.cpp.o.provides.build
.PHONY : ros_comm-melodic-devel/utilities/xmlrpcpp/test/CMakeFiles/test_socket.dir/__/src/XmlRpcSocket.cpp.o.provides

ros_comm-melodic-devel/utilities/xmlrpcpp/test/CMakeFiles/test_socket.dir/__/src/XmlRpcSocket.cpp.o.provides.build: ros_comm-melodic-devel/utilities/xmlrpcpp/test/CMakeFiles/test_socket.dir/__/src/XmlRpcSocket.cpp.o


ros_comm-melodic-devel/utilities/xmlrpcpp/test/CMakeFiles/test_socket.dir/__/src/XmlRpcUtil.cpp.o: ros_comm-melodic-devel/utilities/xmlrpcpp/test/CMakeFiles/test_socket.dir/flags.make
ros_comm-melodic-devel/utilities/xmlrpcpp/test/CMakeFiles/test_socket.dir/__/src/XmlRpcUtil.cpp.o: /home/david/keepon_ws/src/ros_comm-melodic-devel/utilities/xmlrpcpp/src/XmlRpcUtil.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/david/keepon_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object ros_comm-melodic-devel/utilities/xmlrpcpp/test/CMakeFiles/test_socket.dir/__/src/XmlRpcUtil.cpp.o"
	cd /home/david/keepon_ws/build/ros_comm-melodic-devel/utilities/xmlrpcpp/test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/test_socket.dir/__/src/XmlRpcUtil.cpp.o -c /home/david/keepon_ws/src/ros_comm-melodic-devel/utilities/xmlrpcpp/src/XmlRpcUtil.cpp

ros_comm-melodic-devel/utilities/xmlrpcpp/test/CMakeFiles/test_socket.dir/__/src/XmlRpcUtil.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_socket.dir/__/src/XmlRpcUtil.cpp.i"
	cd /home/david/keepon_ws/build/ros_comm-melodic-devel/utilities/xmlrpcpp/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/david/keepon_ws/src/ros_comm-melodic-devel/utilities/xmlrpcpp/src/XmlRpcUtil.cpp > CMakeFiles/test_socket.dir/__/src/XmlRpcUtil.cpp.i

ros_comm-melodic-devel/utilities/xmlrpcpp/test/CMakeFiles/test_socket.dir/__/src/XmlRpcUtil.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_socket.dir/__/src/XmlRpcUtil.cpp.s"
	cd /home/david/keepon_ws/build/ros_comm-melodic-devel/utilities/xmlrpcpp/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/david/keepon_ws/src/ros_comm-melodic-devel/utilities/xmlrpcpp/src/XmlRpcUtil.cpp -o CMakeFiles/test_socket.dir/__/src/XmlRpcUtil.cpp.s

ros_comm-melodic-devel/utilities/xmlrpcpp/test/CMakeFiles/test_socket.dir/__/src/XmlRpcUtil.cpp.o.requires:

.PHONY : ros_comm-melodic-devel/utilities/xmlrpcpp/test/CMakeFiles/test_socket.dir/__/src/XmlRpcUtil.cpp.o.requires

ros_comm-melodic-devel/utilities/xmlrpcpp/test/CMakeFiles/test_socket.dir/__/src/XmlRpcUtil.cpp.o.provides: ros_comm-melodic-devel/utilities/xmlrpcpp/test/CMakeFiles/test_socket.dir/__/src/XmlRpcUtil.cpp.o.requires
	$(MAKE) -f ros_comm-melodic-devel/utilities/xmlrpcpp/test/CMakeFiles/test_socket.dir/build.make ros_comm-melodic-devel/utilities/xmlrpcpp/test/CMakeFiles/test_socket.dir/__/src/XmlRpcUtil.cpp.o.provides.build
.PHONY : ros_comm-melodic-devel/utilities/xmlrpcpp/test/CMakeFiles/test_socket.dir/__/src/XmlRpcUtil.cpp.o.provides

ros_comm-melodic-devel/utilities/xmlrpcpp/test/CMakeFiles/test_socket.dir/__/src/XmlRpcUtil.cpp.o.provides.build: ros_comm-melodic-devel/utilities/xmlrpcpp/test/CMakeFiles/test_socket.dir/__/src/XmlRpcUtil.cpp.o


# Object files for target test_socket
test_socket_OBJECTS = \
"CMakeFiles/test_socket.dir/test_socket.cpp.o" \
"CMakeFiles/test_socket.dir/test_system_mocks.c.o" \
"CMakeFiles/test_socket.dir/__/src/XmlRpcSocket.cpp.o" \
"CMakeFiles/test_socket.dir/__/src/XmlRpcUtil.cpp.o"

# External object files for target test_socket
test_socket_EXTERNAL_OBJECTS =

/home/david/keepon_ws/devel/lib/xmlrpcpp/test_socket: ros_comm-melodic-devel/utilities/xmlrpcpp/test/CMakeFiles/test_socket.dir/test_socket.cpp.o
/home/david/keepon_ws/devel/lib/xmlrpcpp/test_socket: ros_comm-melodic-devel/utilities/xmlrpcpp/test/CMakeFiles/test_socket.dir/test_system_mocks.c.o
/home/david/keepon_ws/devel/lib/xmlrpcpp/test_socket: ros_comm-melodic-devel/utilities/xmlrpcpp/test/CMakeFiles/test_socket.dir/__/src/XmlRpcSocket.cpp.o
/home/david/keepon_ws/devel/lib/xmlrpcpp/test_socket: ros_comm-melodic-devel/utilities/xmlrpcpp/test/CMakeFiles/test_socket.dir/__/src/XmlRpcUtil.cpp.o
/home/david/keepon_ws/devel/lib/xmlrpcpp/test_socket: ros_comm-melodic-devel/utilities/xmlrpcpp/test/CMakeFiles/test_socket.dir/build.make
/home/david/keepon_ws/devel/lib/xmlrpcpp/test_socket: gtest/googlemock/gtest/libgtest.so
/home/david/keepon_ws/devel/lib/xmlrpcpp/test_socket: ros_comm-melodic-devel/utilities/xmlrpcpp/test/CMakeFiles/test_socket.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/david/keepon_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable /home/david/keepon_ws/devel/lib/xmlrpcpp/test_socket"
	cd /home/david/keepon_ws/build/ros_comm-melodic-devel/utilities/xmlrpcpp/test && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_socket.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
ros_comm-melodic-devel/utilities/xmlrpcpp/test/CMakeFiles/test_socket.dir/build: /home/david/keepon_ws/devel/lib/xmlrpcpp/test_socket

.PHONY : ros_comm-melodic-devel/utilities/xmlrpcpp/test/CMakeFiles/test_socket.dir/build

ros_comm-melodic-devel/utilities/xmlrpcpp/test/CMakeFiles/test_socket.dir/requires: ros_comm-melodic-devel/utilities/xmlrpcpp/test/CMakeFiles/test_socket.dir/test_socket.cpp.o.requires
ros_comm-melodic-devel/utilities/xmlrpcpp/test/CMakeFiles/test_socket.dir/requires: ros_comm-melodic-devel/utilities/xmlrpcpp/test/CMakeFiles/test_socket.dir/test_system_mocks.c.o.requires
ros_comm-melodic-devel/utilities/xmlrpcpp/test/CMakeFiles/test_socket.dir/requires: ros_comm-melodic-devel/utilities/xmlrpcpp/test/CMakeFiles/test_socket.dir/__/src/XmlRpcSocket.cpp.o.requires
ros_comm-melodic-devel/utilities/xmlrpcpp/test/CMakeFiles/test_socket.dir/requires: ros_comm-melodic-devel/utilities/xmlrpcpp/test/CMakeFiles/test_socket.dir/__/src/XmlRpcUtil.cpp.o.requires

.PHONY : ros_comm-melodic-devel/utilities/xmlrpcpp/test/CMakeFiles/test_socket.dir/requires

ros_comm-melodic-devel/utilities/xmlrpcpp/test/CMakeFiles/test_socket.dir/clean:
	cd /home/david/keepon_ws/build/ros_comm-melodic-devel/utilities/xmlrpcpp/test && $(CMAKE_COMMAND) -P CMakeFiles/test_socket.dir/cmake_clean.cmake
.PHONY : ros_comm-melodic-devel/utilities/xmlrpcpp/test/CMakeFiles/test_socket.dir/clean

ros_comm-melodic-devel/utilities/xmlrpcpp/test/CMakeFiles/test_socket.dir/depend:
	cd /home/david/keepon_ws/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/david/keepon_ws/src /home/david/keepon_ws/src/ros_comm-melodic-devel/utilities/xmlrpcpp/test /home/david/keepon_ws/build /home/david/keepon_ws/build/ros_comm-melodic-devel/utilities/xmlrpcpp/test /home/david/keepon_ws/build/ros_comm-melodic-devel/utilities/xmlrpcpp/test/CMakeFiles/test_socket.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : ros_comm-melodic-devel/utilities/xmlrpcpp/test/CMakeFiles/test_socket.dir/depend

