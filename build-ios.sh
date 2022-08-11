#!/bin/sh
chmod +x build/alpine/combined/*.sh;
cd build/alpine/combined;
./cmake.sh;
cd ../../..;