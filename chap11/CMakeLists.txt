cmake_minimum_required(VERSION 3.10)

project(CHAP11)

include_directories(${HEAD_PATH})

link_directories(${LIB_PATH})

add_executable(thread_id 11_2_print_thread_id.c)
add_executable(thread_exit_status 11_3_get_thread_exit_status.c)

target_link_libraries(thread_id pthread apue)
target_link_libraries(thread_exit_status pthread apue)