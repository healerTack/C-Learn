cmake_minimum_required(VERSION 3.20.0)
project(Code)

file(GLOB SRC ${PROJECT_SOURCE_DIR}/src/*.cpp)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/outFile)

add_executable(Code ${SRC})



