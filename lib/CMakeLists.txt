cmake_minimum_required(VERSION 3.10)

project(APUELIB)

aux_source_directory(./ SRC)

include_directories(${HEAD_PATH})

set(LIBRARY_OUTPUT_PATH ${LIB_PATH})

add_library(${APUE_LIB} STATIC ${SRC})
