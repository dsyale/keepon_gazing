#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
    DESTDIR_ARG="--root=$DESTDIR"
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/david/keepon_ws/src/ros_comm-melodic-devel/tools/rosnode"

# ensure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/david/keepon_ws/install/lib/python2.7/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/david/keepon_ws/install/lib/python2.7/dist-packages:/home/david/keepon_ws/build/lib/python2.7/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/david/keepon_ws/build" \
    "/usr/bin/python2" \
    "/home/david/keepon_ws/src/ros_comm-melodic-devel/tools/rosnode/setup.py" \
    build --build-base "/home/david/keepon_ws/build/ros_comm-melodic-devel/tools/rosnode" \
    install \
    $DESTDIR_ARG \
    --install-layout=deb --prefix="/home/david/keepon_ws/install" --install-scripts="/home/david/keepon_ws/install/bin"
