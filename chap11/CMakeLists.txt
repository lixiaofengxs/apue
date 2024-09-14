cmake_minimum_required(VERSION 3.10)

project(CHAP11)

include_directories(${HEAD_PATH})

link_directories(${LIB_PATH})

add_executable(thread_id 11_2_print_thread_id.c)
add_executable(thread_exit_status 11_3_get_thread_exit_status.c)
add_executable(thread_stack_error 11_4_thread_stack_error.c)
add_executable(thread_timedlock 11_13_pthread_mutex_timedlock.c)
add_executable(use_rwlock 11_14_use_rwlock.c)
add_executable(use_barrier 11_16_use_barrier.c)

target_link_libraries(thread_id pthread apue)
target_link_libraries(thread_exit_status pthread apue)
target_link_libraries(thread_stack_error pthread apue)
target_link_libraries(thread_timedlock pthread apue)
target_link_libraries(use_rwlock pthread apue)
target_link_libraries(use_barrier pthread apue)