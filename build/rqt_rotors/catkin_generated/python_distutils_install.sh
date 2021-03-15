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
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/asl/catkin_ws_ii/src/rotors_simulator/rqt_rotors"

# ensure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/asl/catkin_ws_ii/install/lib/python2.7/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/asl/catkin_ws_ii/install/lib/python2.7/dist-packages:/home/asl/catkin_ws_ii/build/rqt_rotors/lib/python2.7/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/asl/catkin_ws_ii/build/rqt_rotors" \
    "/usr/bin/python2" \
    "/home/asl/catkin_ws_ii/src/rotors_simulator/rqt_rotors/setup.py" \
     \
    build --build-base "/home/asl/catkin_ws_ii/build/rqt_rotors" \
    install \
    --root="${DESTDIR-/}" \
    --install-layout=deb --prefix="/home/asl/catkin_ws_ii/install" --install-scripts="/home/asl/catkin_ws_ii/install/bin"
