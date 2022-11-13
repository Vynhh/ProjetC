cmake_minimum_required(VERSION 3.21)
project(ProjetCDico C)

set(CMAKE_C_STANDARD 99)

add_executable(ProjetCDico main.c fonction.c fonction.h node.c node.h)
