cmake_minimum_required(VERSION 3.7)
project(ConanSample)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup(TARGETS)

add_subdirectory(src)