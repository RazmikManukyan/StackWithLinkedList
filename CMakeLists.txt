cmake_minimum_required(VERSION 3.26)
project(StackWithLinkedList)

set(CMAKE_CXX_STANDARD 17)

add_executable(StackWithLinkedList main.cpp
        Node.h
        Stack.h
        Stack.tpp)
