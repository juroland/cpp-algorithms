cmake_minimum_required(VERSION 2.8.9)

project(cpp-algorithm)

set(CMAKE_CXX_STANDARD 14)

include_directories(lib)

add_subdirectory(tools)
add_subdirectory(test)