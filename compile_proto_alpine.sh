#!/bin/sh
protoc --proto_path=./proto/ --swift_out=./export/alpine/ ./proto/*.proto