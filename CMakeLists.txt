cmake_minimum_required(VERSION 3.28)
project(Practice C)

set(CMAKE_C_STANDARD 11)

add_executable(Practice main.c
        "tasks/1 task.h"
        "tasks/2 task.h"
        "tasks/3 task.h"
        "tasks/4 task.h"
        "tasks/5 task.h"
        "tasks/6 task.h")
