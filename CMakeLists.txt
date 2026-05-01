cmake_minimum_required(VERSION 4.1)
project(DSA C)

set(CMAKE_C_STANDARD 11)

add_executable(DSA main.c
        PracticeC/hello.c
        PracticeC/tp.c
        PracticeC/dsaCalc.c
        Lists/Insert.c
        Lists/delete.c
        PracticeC/PointersPrac/q1.c
        PracticeC/PointersPrac/q2.c
        PracticeC/PatternsPrac/q1.c
        PracticeC/PatternsPrac/q2.c
)
