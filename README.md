## c++ 学习记录

### cmake 使用
```shell
cmake_minimum_required(VERSION 3.10)

project(cppx)

# 添加头文件
include_directories(${PROJECT_SOURCE_DIR}/include)

# 添加子目录
add_subdirectory(src)
```


### src/stlx STL 使用示例