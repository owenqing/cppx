cmake_minimum_required(VERSION 3.10)

project(cppx)

# 添加头文件
include_directories(${PROJECT_SOURCE_DIR}/include)

# 添加子目录
add_subdirectory(src)
add_subdirectory(test)

# google test
enable_testing()
add_subdirectory(third_party/googletest)
include_directories(third_party/googletest/googletest/include)
