cmake_minimum_required(VERSION 3.26)
project(COS214Project)

set(CMAKE_CXX_STANDARD 11)

add_executable(COS214Project main.cpp
        Table.cpp
        Table.h
        Restaurant.cpp
        Restaurant.h)
