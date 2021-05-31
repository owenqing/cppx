set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)

add_subdirectory(common)

# =============================================
#           TEST MODULE
# =============================================
add_executable(test_common ./common/common_test.cc)
target_link_libraries(test_common common gtest gtest_main)
