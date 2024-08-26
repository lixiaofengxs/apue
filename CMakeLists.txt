cmake_minimum_required(VERSION 3.10)

project(APUE)

set(LIB_PATH ${CMAKE_CURRENT_SOURCE_DIR}/lib)
set(HEAD_PATH ${CMAKE_CURRENT_SOURCE_DIR}/include)

set(APUE_LIB apue)

add_subdirectory(lib)
add_subdirectory(chap11)