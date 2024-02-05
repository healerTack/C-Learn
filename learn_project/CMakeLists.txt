cmake_minimum_required(VERSION 3.20.0)
project(LearnCode)

file(GLOB SRC ${PROJECT_SOURCE_DIR}/src/*.cpp)

include_directories(${PROJECT_SOURCE_DIR}/include)

# 创建静态库
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)
add_library(Learn STATIC ${SRC})

# 设置二进制可运行文件输出位置
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR})

# 调用静态库
# 连接静态库所在目录
link_directories(${PROJECT_SOURCE_DIR}/lib)
# 连接静态库
link_libraries(Learn)
# 生成二进制可执行文件
add_executable(code main.cpp)
