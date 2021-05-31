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

### 如何使用 google test
* 新建 third_party 目录用于存放第三方库
* 在项目根目录新建 test 目录，用于存放测试文件
* 在根目录 CMakeLists 中新增 google test 相关配置
```cmake
# google test
enable_testing()
add_subdirectory(third_party/googletest)
include_directories(third_party/googletest/googletest/include)
```
