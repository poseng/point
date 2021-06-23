cmake_minimum_required(VERSION 3.16)
project(Point)

set(CMAKE_CXX_STANDARD 11)

add_executable(Point src/main.cpp src/Point.cpp src/Point.h)
add_executable(TestDynamicAllocation src/TestDynamicAllcoation.cpp src/Point.cpp src/Point.h)
add_executable(TestMovablePoint
        src/TestMovablePoint.cpp
        src/MovablePoint.cpp
        src/MovablePoint.h
        src/Point.h
        src/Point.cpp)
add_executable(TestSubstitution
        src/TestSubstitution.cpp
        src/MovablePoint.cpp
        src/MovablePoint.h
        src/Point.h
        src/Point.cpp)
