cmake_minimum_required(VERSION 4.1)
project(DSA C)

set(CMAKE_C_STANDARD 11)

add_executable(DSA main.c
        PracticeC/hello.c
        PracticeC/tp.c
        PracticeC/dsaCalc.c
        Lists/Insert.c)
