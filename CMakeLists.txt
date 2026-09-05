cmake_minimum_required(VERSION 3.20)
project(untitled2 C)

set(CMAKE_C_STANDARD 99)

# Tự động nhận tất cả các file .c trong thư mục làm từng bài chạy riêng
file(GLOB ALL_SOURCES "*.c")

foreach(SOURCE_FILE ${ALL_SOURCES})
    get_filename_component(EXEC_NAME ${SOURCE_FILE} NAME_WE)
    add_executable(${EXEC_NAME} ${SOURCE_FILE})
endforeach()