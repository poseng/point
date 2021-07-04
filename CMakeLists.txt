cmake_minimum_required(VERSION 3.19)
project(Point)

set(CMAKE_CXX_STANDARD 17

        )

add_executable(Point src/main.cpp src/Point.cpp src/Point.h)
add_executable(TestDynamicAllocation src/TestDynamicAllcoation.cpp src/Point.cpp src/Point.h)
add_executable(TestMovablePoint
        src/TestMovablePoint.cpp
        src/MovablePoint.cpp
        src/MovablePoint.h
        src/Point.h
        src/Point.cpp)
add_executable(TestCast
        src/TestCast.cpp
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

add_executable(TestTypeID
    src/TestTypeID.cpp
        src/MovablePoint.cpp
        src/MovablePoint.h
        src/Point.cpp
        src/Point.h)

add_executable(TestShape
        src/TestShape.cpp
        src/Shape.cpp
        src/Shape.h
        src/Circle.cpp
        src/Circle.h
        src/Rectangle.cpp
        src/Rectangle.h)