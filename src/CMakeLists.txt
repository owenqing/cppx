set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)

aux_source_directory(./ SRC)

add_executable(cppx ${SRC})

add_subdirectory(common)
add_subdirectory(stlx)

target_link_libraries(cppx common stlx)