#!/bin/sh

OPEN_SSL_VERSION=3.0.5;
CURL_VERSION=7_84_0;

cd openssl;
git checkout .;
git clean -fdx;
git checkout openssl-$OPEN_SSL_VERSION;
cd ..;
cd curl;
git checkout .;
git clean -fdx;
git checkout curl-$CURL_VERSION;
cd ..;
