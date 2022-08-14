#!/bin/sh
protoc --proto_path=./proto/ --cpp_out=./src/proto/ ./proto/*.proto