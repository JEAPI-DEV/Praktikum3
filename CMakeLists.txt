cmake_minimum_required(VERSION 3.29)
project(Praktikum3 C)

set(CMAKE_C_STANDARD 90)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -std=c89 -Werror -pedantic -Wextra -pedantic-errors -Wconversion -Walloc-zero -Wcast-qual -Wfloat-equal")


add_executable(Praktikum3 main.c
        root.c
        math_float.h
        math_flaot.c)
