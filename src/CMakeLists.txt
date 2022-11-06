add_library(CTXHTTP STATIC)

add_dependencies(CTXHTTP libprotobuf)

target_compile_options(CTXHTTP PUBLIC -x objective-c++)

# target_include_directories(CTXHTTP PUBLIC ${Protobuf_INCLUDE_DIR})
# message(PROTOBUF INCLUDE: ${Protobuf_INCLUDE_DIR})
set_property(TARGET CTXHTTP PROPERTY CXX_STANDARD 14)

if(alpine)
target_compile_definitions(CTXHTTP PUBLIC IS_ALPINE)
target_link_libraries(CTXHTTP PUBLIC
"-framework Cocoa"
"-framework AppKit"
"-framework CoreData"
"-framework Foundation"
)
endif()

if (android)
target_compile_definitions(CTXHTTP PUBLIC IS_ANDROID)
endif()

if (tests)
target_compile_definitions(CTXHTTP PUBLIC IS_TESTS)
endif()

# find_package(libprotobuf REQUIRED NO_DEFAULT_PATH CONFIGS libprotobuf.cmake HINTS ../deps/google/protobuf/cmake)

# find_library(Protobuf_PATH libprotobuf NO_DEFAULT_PATH)
# # link_directories(${CMAKE_BINARY_DIR}/deps/google/protobuf/)
# message(Found_proto_at: ${CMAKE_BINARY_DIR})
# # add_library(libprotobuf)

# message(STATUS "proto_path: ${Protobuf_PATH}")
target_link_libraries(CTXHTTP PUBLIC libprotobuf)


target_sources(CTXHTTP PUBLIC
${SRC_ROOT_DIR}/proto/http_response.pb.h
${SRC_ROOT_DIR}/proto/http_request.pb.cc
${SRC_ROOT_DIR}/proto/http_request.pb.h
${SRC_ROOT_DIR}/proto/http_response.pb.cc
${SRC_ROOT_DIR}/common/DataWrapper.cpp
${SRC_ROOT_DIR}/common/DataWrapper.hpp
${SRC_ROOT_DIR}/common/DataWrapper.hpp
${SRC_ROOT_DIR}/http/models/Request.cpp
${SRC_ROOT_DIR}/http/client/ClientImpl.cpp
${SRC_ROOT_DIR}/http/client/Client.hpp
${SRC_ROOT_DIR}/http/client/Client.hpp)

if(alpine)
target_sources(CTXHTTP PUBLIC
${SRC_ROOT_DIR}/http/client/iphone/AlpineClientImpl.mm)
endif()