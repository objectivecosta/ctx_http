#!/bin/bash
rm -rf xcode
mkdir xcode
cd xcode
cmake ../ -G Xcode -DCMAKE_SYSTEM_NAME=iOS -DCMAKE_OSX_SYSROOT=iphonesimulator
cd ../