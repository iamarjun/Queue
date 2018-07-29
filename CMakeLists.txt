cmake_minimum_required(VERSION 3.9)
project(Queue C)

set(CMAKE_C_STANDARD 11)

add_executable(Queue main.c queuearray.h queuelinkedlist.h)