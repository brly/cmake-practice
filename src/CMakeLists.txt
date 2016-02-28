cmake_minimum_required(VERSION 3.0)
project(practice)

# Toolchain options
include_directories(.)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

# sub CMakeLists.txt
add_subdirectory(entrypoint)
add_subdirectory(sub-entrypoint)
add_subdirectory(model)
add_subdirectory(controller)
add_subdirectory(view)
