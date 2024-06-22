cmake_minimum_required(VERSION 3.28)
project(figury)

set(CMAKE_CXX_STANDARD 17)

add_executable(figury main.cpp
        Square.cpp
        Square.h)
