cmake_minimum_required(VERSION 3.14)
project(libcutils)

set(CMAKE_C_STANDARD 99)

add_executable(libcutils main.c hashmap.c list.c threads.c str_parms.c)