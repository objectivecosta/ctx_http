
cmake_minimum_required(VERSION 3.10)
project(CTXHTTP)
set(NAME CTXHTTP)
add_library(CTXHTTP-alpine STATIC)
set_property(TARGET CTXHTTP-alpine PROPERTY CXX_STANDARD 14)
add_library(CTXHTTP-android-arm64-v8a STATIC)
set_property(TARGET CTXHTTP-android-arm64-v8a PROPERTY CXX_STANDARD 14)

add_library(CTXHTTP-android-armeabi-v7a STATIC)
set_property(TARGET CTXHTTP-android-armeabi-v7a PROPERTY CXX_STANDARD 14)

add_library(CTXHTTP-android-x86 STATIC)
set_property(TARGET CTXHTTP-android-x86 PROPERTY CXX_STANDARD 14)

add_library(CTXHTTP-android-x86_64 STATIC)
set_property(TARGET CTXHTTP-android-x86_64 PROPERTY CXX_STANDARD 14)

target_link_libraries(CTXHTTP-alpine
"-framework Cocoa"
"-framework AppKit"
"-framework CoreData"
"-framework Foundation"
)
target_compile_options(CTXHTTP-alpine PUBLIC -x objective-c++)
target_compile_definitions(CTXHTTP-alpine PUBLIC IS_ALPINE)
    

target_compile_definitions(CTXHTTP-android-arm64-v8a PUBLIC IS_ANDROID)
target_include_directories(CTXHTTP-android-arm64-v8a PUBLIC ./deps/libcurl/build/openssl/arm64-v8a/include)
target_link_libraries(CTXHTTP-android-arm64-v8a PUBLIC ./deps/libcurl/build/openssl/arm64-v8a/lib/libcurl.a)
    

target_compile_definitions(CTXHTTP-android-armeabi-v7a PUBLIC IS_ANDROID)
target_include_directories(CTXHTTP-android-armeabi-v7a PUBLIC ./deps/libcurl/build/openssl/armeabi-v7a/include)
target_link_libraries(CTXHTTP-android-armeabi-v7a PUBLIC ./deps/libcurl/build/openssl/armeabi-v7a/lib/libcurl.a)
    

target_compile_definitions(CTXHTTP-android-x86 PUBLIC IS_ANDROID)
target_include_directories(CTXHTTP-android-x86 PUBLIC ./deps/libcurl/build/openssl/x86/include)
target_link_libraries(CTXHTTP-android-x86 PUBLIC ./deps/libcurl/build/openssl/x86/lib/libcurl.a)
    

target_compile_definitions(CTXHTTP-android-x86_64 PUBLIC IS_ANDROID)
target_include_directories(CTXHTTP-android-x86_64 PUBLIC ./deps/libcurl/build/openssl/x86_64/include)
target_link_libraries(CTXHTTP-android-x86_64 PUBLIC ./deps/libcurl/build/openssl/x86_64/lib/libcurl.a)
    target_sources(CTXHTTP-alpine PUBLIC
"./src/common/DataWrapper.cpp"
"./src/common/DataWrapper.hpp"
"./src/http/models/Request.cpp"
"./src/http/client/ClientImpl.cpp"
"./src/http/client/Client.hpp"
"./src/http/client/iphone/AlpineClientImpl.mm")
target_sources(CTXHTTP-android-arm64-v8a PUBLIC
"./src/common/DataWrapper.cpp"
"./src/common/DataWrapper.hpp"
"./src/http/models/Request.cpp"
"./src/http/client/ClientImpl.cpp"
"./src/http/client/Client.hpp")
target_sources(CTXHTTP-android-armeabi-v7a PUBLIC
"./src/common/DataWrapper.cpp"
"./src/common/DataWrapper.hpp"
"./src/http/models/Request.cpp"
"./src/http/client/ClientImpl.cpp"
"./src/http/client/Client.hpp")
target_sources(CTXHTTP-android-x86 PUBLIC
"./src/common/DataWrapper.cpp"
"./src/common/DataWrapper.hpp"
"./src/http/models/Request.cpp"
"./src/http/client/ClientImpl.cpp"
"./src/http/client/Client.hpp")
target_sources(CTXHTTP-android-x86_64 PUBLIC
"./src/common/DataWrapper.cpp"
"./src/common/DataWrapper.hpp"
"./src/http/models/Request.cpp"
"./src/http/client/ClientImpl.cpp"
"./src/http/client/Client.hpp")
