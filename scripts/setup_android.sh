#!/bin/bash
./generate_cmake_lists.py --platform android > CMakeLists.txt
cd deps/libcurl/
./build.sh
cd ../..