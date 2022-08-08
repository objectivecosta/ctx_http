#!/usr/bin/python3
import sys
import os
import list_files

def current_path():
    return os.path.dirname(os.path.realpath(__file__))

def java_include():
    java_home = os.getenv("JAVA_HOME", default=None)
    return "{}/include/".format(java_home)

def platform():
    for index, argument in enumerate(sys.argv):
        if argument.startswith("--platform"):
            if "=" in argument:
                return argument.replace("--platform=", "")
            else:
                return sys.argv[index + 1]

def is_alpine():
    return platform() == "alpine"

def is_android():
    return platform() == "android"

alpine_archs = [
    "arm64",
    "x86_64"
]

android_archs = [
    "arm64-v8a",
    "armeabi-v7a",
    "x86",
    "x86_64"
]

cmake_header = """
cmake_minimum_required(VERSION 3.10)
project(CTXHTTP)
set(NAME CTXHTTP)
"""

def alpine_targets():
    if is_alpine() == False:
        return ""

    return "add_library(CTXHTTP-alpine STATIC)\nset_property(TARGET CTXHTTP-alpine PROPERTY CXX_STANDARD 14)"

def android_targets():
    if is_android() == False:
        return ""

    targets = ""
    for arch in android_archs:
        targets = targets + "\n"
        targets = targets + "add_library(CTXHTTP-android-{} SHARED)".format(arch) + "\n"
        targets = targets + "set_property(TARGET CTXHTTP-android-{} PROPERTY CXX_STANDARD 14)".format(arch) + "\n"
    return targets

def alpine_options():
    if is_alpine() == False:
        return ""

    return """
target_link_libraries(CTXHTTP-alpine
"-framework Cocoa"
"-framework AppKit"
"-framework CoreData"
"-framework Foundation"
)
target_compile_options(CTXHTTP-alpine PUBLIC -x objective-c++)
target_compile_definitions(CTXHTTP-alpine PUBLIC IS_ALPINE)
    """

def android_options():
    if is_android() == False:
        return ""

    options = ""
    for arch in android_archs:
        options = options + "\n"
        options = options + android_options_for_arch(arch)
    return options

def android_options_for_arch(arch):
    if is_android() == False:
        return ""
        
    text = "target_compile_definitions(CTXHTTP-android-{} PUBLIC IS_ANDROID)\n".format(arch)
    text += "target_include_directories(CTXHTTP-android-{} PUBLIC {})\n".format(arch, java_include())
    text += "target_include_directories(CTXHTTP-android-{} PUBLIC {}/deps/libcurl/build/curl/{}/include)\n".format(arch, current_path(), arch)
    text += "target_link_libraries(CTXHTTP-android-{} PUBLIC {}/deps/libcurl/build/curl/{}/lib/libcurl.a)\n".format(arch, current_path(), arch)
    return text

def alpine_sources():
    if is_alpine() == False:
        return ""

    sources = "target_sources(CTXHTTP-alpine PUBLIC"
    for file in list_files.list_files():
        if "jni" not in file:
            sources = sources + "\n"
            sources = sources + "\"{}\"".format(file)
    sources = sources + ")"
    return sources

def android_sources():
    if is_android() == False:
        return ""

    sources = ""
    for arch in android_archs:
        sources = sources + "\n"
        sources = sources + android_sources_for_arch(arch)
    return sources

def android_sources_for_arch(arch):
    if is_android() == False:
        return ""
    sources = "target_sources(CTXHTTP-android-{} PUBLIC".format(arch)
    for file in list_files.list_files():
        if ".mm" not in file:
            sources = sources + "\n"
            sources = sources + "\"{}\"".format(file)
    sources = sources + ")"
    return sources

### Final File:

final_file = cmake_header
final_file = final_file + alpine_targets()
final_file = final_file + android_targets()

final_file = final_file + alpine_options()
final_file = final_file + android_options()

final_file = final_file + alpine_sources()
final_file = final_file + android_sources()

print(final_file)

