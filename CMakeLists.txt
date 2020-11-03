cmake_minimum_required(VERSION 3.12)
project(lab8)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -pthread")

add_executable(lab8 main.cpp figure.hpp vertex.hpp vertex.cpp factory.hpp factory.cpp pentagon.hpp hexagon.hpp octagon.hpp pentagon.cpp hexagon.cpp octagon.cpp subscriber.hpp subscriber.cpp processor.hpp processor.cpp)