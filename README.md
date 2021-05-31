## c++ 学习记录

### CMake 使用
CMake 学习参考: 《CMake 实践》

```cmake
# 指定 cmake 版本信息
cmake_minimum_required(VERSION 3.10)
# 工程名
project(cppx)
# 添加头文件路径
include_directories(${PROJECT_SOURCE_DIR}/include)
# 添加子目录
add_subdirectory(src)
```

### STL 使用示例
* vector

### 使用 googletest 做测试
* 新建 third_party 目录用于存放第三方库
* 在项目根目录新建 test 目录，用于存放测试文件
* 在根目录 CMakeLists 中新增 google test 相关配置
```cmake
# google test
enable_testing()
add_subdirectory(third_party/googletest)
include_directories(third_party/googletest/googletest/include)
```
* test 下的 CMakeLists 请参考代码
