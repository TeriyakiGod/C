cmake_minimum_required(VERSION 3.25)
project(C C)

set(CMAKE_C_STANDARD 17)

add_executable(C src/main.c src/validateIp.c src/validateIp.h)
