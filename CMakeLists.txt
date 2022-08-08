
cmake_minimum_required(VERSION 3.10)
project(CTXHTTP)
set(NAME CTXHTTP)

add_library(CTXHTTP-android-arm64-v8a SHARED)
set_property(TARGET CTXHTTP-android-arm64-v8a PROPERTY CXX_STANDARD 14)

add_library(CTXHTTP-android-armeabi-v7a SHARED)
set_property(TARGET CTXHTTP-android-armeabi-v7a PROPERTY CXX_STANDARD 14)

add_library(CTXHTTP-android-x86 SHARED)
set_property(TARGET CTXHTTP-android-x86 PROPERTY CXX_STANDARD 14)

add_library(CTXHTTP-android-x86_64 SHARED)
set_property(TARGET CTXHTTP-android-x86_64 PROPERTY CXX_STANDARD 14)

target_compile_definitions(CTXHTTP-android-arm64-v8a PUBLIC IS_ANDROID)
target_include_directories(CTXHTTP-android-arm64-v8a PUBLIC /Library/Java/JavaVirtualMachines/jdk-17.0.2.jdk/Contents/Home/include/)
target_include_directories(CTXHTTP-android-arm64-v8a PUBLIC /Users/rafaelcosta/projekte/ctx_http/deps/libcurl/build/curl/arm64-v8a/include)
target_link_libraries(CTXHTTP-android-arm64-v8a PUBLIC /Users/rafaelcosta/projekte/ctx_http/deps/libcurl/build/curl/arm64-v8a/lib/libcurl.a)

target_compile_definitions(CTXHTTP-android-armeabi-v7a PUBLIC IS_ANDROID)
target_include_directories(CTXHTTP-android-armeabi-v7a PUBLIC /Library/Java/JavaVirtualMachines/jdk-17.0.2.jdk/Contents/Home/include/)
target_include_directories(CTXHTTP-android-armeabi-v7a PUBLIC /Users/rafaelcosta/projekte/ctx_http/deps/libcurl/build/curl/armeabi-v7a/include)
target_link_libraries(CTXHTTP-android-armeabi-v7a PUBLIC /Users/rafaelcosta/projekte/ctx_http/deps/libcurl/build/curl/armeabi-v7a/lib/libcurl.a)

target_compile_definitions(CTXHTTP-android-x86 PUBLIC IS_ANDROID)
target_include_directories(CTXHTTP-android-x86 PUBLIC /Library/Java/JavaVirtualMachines/jdk-17.0.2.jdk/Contents/Home/include/)
target_include_directories(CTXHTTP-android-x86 PUBLIC /Users/rafaelcosta/projekte/ctx_http/deps/libcurl/build/curl/x86/include)
target_link_libraries(CTXHTTP-android-x86 PUBLIC /Users/rafaelcosta/projekte/ctx_http/deps/libcurl/build/curl/x86/lib/libcurl.a)

target_compile_definitions(CTXHTTP-android-x86_64 PUBLIC IS_ANDROID)
target_include_directories(CTXHTTP-android-x86_64 PUBLIC /Library/Java/JavaVirtualMachines/jdk-17.0.2.jdk/Contents/Home/include/)
target_include_directories(CTXHTTP-android-x86_64 PUBLIC /Users/rafaelcosta/projekte/ctx_http/deps/libcurl/build/curl/x86_64/include)
target_link_libraries(CTXHTTP-android-x86_64 PUBLIC /Users/rafaelcosta/projekte/ctx_http/deps/libcurl/build/curl/x86_64/lib/libcurl.a)

target_sources(CTXHTTP-android-arm64-v8a PUBLIC
"/Users/rafaelcosta/projekte/ctx_http/src/common/DataWrapper.cpp"
"/Users/rafaelcosta/projekte/ctx_http/src/common/DataWrapper.hpp"
"/Users/rafaelcosta/projekte/ctx_http/src/http/models/Request.cpp"
"/Users/rafaelcosta/projekte/ctx_http/src/http/client/ClientImpl.cpp"
"/Users/rafaelcosta/projekte/ctx_http/src/http/client/Client.hpp"
"/Users/rafaelcosta/projekte/ctx_http/src/jni/jni_interface.cpp")
target_sources(CTXHTTP-android-armeabi-v7a PUBLIC
"/Users/rafaelcosta/projekte/ctx_http/src/common/DataWrapper.cpp"
"/Users/rafaelcosta/projekte/ctx_http/src/common/DataWrapper.hpp"
"/Users/rafaelcosta/projekte/ctx_http/src/http/models/Request.cpp"
"/Users/rafaelcosta/projekte/ctx_http/src/http/client/ClientImpl.cpp"
"/Users/rafaelcosta/projekte/ctx_http/src/http/client/Client.hpp"
"/Users/rafaelcosta/projekte/ctx_http/src/jni/jni_interface.cpp")
target_sources(CTXHTTP-android-x86 PUBLIC
"/Users/rafaelcosta/projekte/ctx_http/src/common/DataWrapper.cpp"
"/Users/rafaelcosta/projekte/ctx_http/src/common/DataWrapper.hpp"
"/Users/rafaelcosta/projekte/ctx_http/src/http/models/Request.cpp"
"/Users/rafaelcosta/projekte/ctx_http/src/http/client/ClientImpl.cpp"
"/Users/rafaelcosta/projekte/ctx_http/src/http/client/Client.hpp"
"/Users/rafaelcosta/projekte/ctx_http/src/jni/jni_interface.cpp")
target_sources(CTXHTTP-android-x86_64 PUBLIC
"/Users/rafaelcosta/projekte/ctx_http/src/common/DataWrapper.cpp"
"/Users/rafaelcosta/projekte/ctx_http/src/common/DataWrapper.hpp"
"/Users/rafaelcosta/projekte/ctx_http/src/http/models/Request.cpp"
"/Users/rafaelcosta/projekte/ctx_http/src/http/client/ClientImpl.cpp"
"/Users/rafaelcosta/projekte/ctx_http/src/http/client/Client.hpp"
"/Users/rafaelcosta/projekte/ctx_http/src/jni/jni_interface.cpp")
