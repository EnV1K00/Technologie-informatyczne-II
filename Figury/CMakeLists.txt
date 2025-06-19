cmake_minimum_required(VERSION 3.29)
project(untitled51)

set(CMAKE_CXX_STANDARD 20)

add_executable(untitled51
        main.cpp Figure.cpp Figure.h Rectangle.cpp Rectangle.h Square.cpp Square.h
        Circle.cpp
        Circle.h
        Triangle.cpp
        Triangle.h)
