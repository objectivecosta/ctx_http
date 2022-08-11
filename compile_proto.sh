#!/bin/sh
protoc -I=./src --cpp_out=./src/protoc ./src/proto/*.proto