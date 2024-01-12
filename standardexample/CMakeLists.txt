cmake_minimum_required(VERSION 3.20.0)
project(Animal CXX)

# 将所有的.cpp文件设为变量SRC
file(GLOB SRC ${PROJECT_SOURCE_DIR}/src/*.cpp)
# 连接头文件所在目录
include_directories(${PROJECT_SOURCE_DIR}/include)

# 创建静态库
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)
add_library(animalStatic STATIC ${SRC})

# 创建动态库
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)
add_library(animalShared SHARED ${SRC})

# 设置二进制可执行文件输出路径
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR})

# 调用静态库
# 连接静态库所在目录
link_directories(${PROJECT_SOURCE_DIR}/lib)
# 连接静态库
link_libraries(animalStatic)
# 生成二进制可执行文件
add_executable(app_static main.cpp)

# 调用动态库
# 连接动态库所在目录
link_directories(${PROJECT_SOURCE_DIR}/lib)
# 生成二进制可执行文件
add_executable(app_shared main.cpp)
# 连接动态库
target_link_libraries(app_shared PUBLIC animalShared)