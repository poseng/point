//
// Created by ps on 01/07/2021.
//

#include "Circle.h"
#include <iostream>

#define PI 3.14159265



int Circle::getRadius() const {
    return radius;
}

void Circle::setRadius(int radius) {
    Circle::radius = radius;
}

void Circle::print() const {
    std::cout << "Circle radius = " << radius << " , sublcass of ";
    Shape::print();
}

double Circle::getArea() const {
    return radius * radius * PI;
}

Circle::Circle(int radius, const std::string & color) : Shape(color), radius(radius) {}

Circle::~Circle() {

}



