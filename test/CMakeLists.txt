cmake_minimum_required(VERSION 3.0)

add_executable(foo_test foo_test.cxx main.cxx)
target_link_libraries(foo_test pthread gtest libMyProject)
target_include_directories(foo_test  PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/../src>)

add_test(NAME foo_test COMMAND foo_test)
