
cmake_minimum_required(VERSION 3.10)
project(CTXHTTP)
set(NAME CTXHTTP)
add_library(CTXHTTP-alpine STATIC)
set_property(TARGET CTXHTTP-alpine PROPERTY CXX_STANDARD 14)
target_link_libraries(CTXHTTP-alpine
"-framework Cocoa"
"-framework AppKit"
"-framework CoreData"
"-framework Foundation"
)
target_compile_options(CTXHTTP-alpine PUBLIC -x objective-c++)
target_compile_definitions(CTXHTTP-alpine PUBLIC IS_ALPINE)
    target_sources(CTXHTTP-alpine PUBLIC
"/Users/rafaelcosta/projekte/ctx_http/src/proto/http_response.pb.h"
"/Users/rafaelcosta/projekte/ctx_http/src/proto/http_request.pb.cc"
"/Users/rafaelcosta/projekte/ctx_http/src/proto/http_request.pb.h"
"/Users/rafaelcosta/projekte/ctx_http/src/proto/http_response.pb.cc"
"/Users/rafaelcosta/projekte/ctx_http/src/common/DataWrapper.cpp"
"/Users/rafaelcosta/projekte/ctx_http/src/common/DataWrapper.hpp"
"/Users/rafaelcosta/projekte/ctx_http/src/common/DataWrapper.hpp"
"/Users/rafaelcosta/projekte/ctx_http/src/http/models/Request.cpp"
"/Users/rafaelcosta/projekte/ctx_http/src/http/client/ClientImpl.cpp"
"/Users/rafaelcosta/projekte/ctx_http/src/http/client/Client.hpp"
"/Users/rafaelcosta/projekte/ctx_http/src/http/client/Client.hpp"
"/Users/rafaelcosta/projekte/ctx_http/src/http/client/iphone/AlpineClientImpl.mm")
