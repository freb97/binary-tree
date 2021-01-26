cmake_minimum_required(VERSION 3.10)

project(binary_tree)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/build)

set(CMAKE_BUILD_TYPE Debug)

add_executable(binarytree
  src/tree.h
  src/tree.c
  binary_tree.c
)