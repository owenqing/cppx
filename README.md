## c++ 学习记录

### cmake 使用
* PROJECT_SOURCE_DIR PROJECT_BINARY_DIR 是已经被指定好了的值。source_dir 表示源文件路径，binary_dir 表示 build 所在路径

```shell
# 指定 cmake 版本信息
cmake_minimum_required(VERSION 3.10)

# 工程名
project(cppx)

# 添加头文件路径
include_directories(${PROJECT_SOURCE_DIR}/include)

# 添加子目录
add_subdirectory(src)
```


### src/stlx STL 使用示例