cmake_minimum_required(VERSION 3.20.0)

file(GLOB SRC ${PROJECT_SOURCE_DIR}/src/*.cpp)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR})

add_executable(code main.cpp)