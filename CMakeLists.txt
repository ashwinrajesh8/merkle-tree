cmake_minimum_required(VERSION 3.15)
project(merkle_tree)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)

add_executable(merkle_tree
        include/merkle_tree.h
        include/misc.h
        include/node.h
        include/picosha2.h
        src/main.cpp
        src/merkle_tree.cpp
        src/node.cpp)
