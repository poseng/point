//
// Created by ps on 01/07/2021.
//

#include "Circle.h"

#define PI 3.14159265

Circle::Circle(const string &color, int radius) : Shape(color), radius(radius) {}

int Circle::getRadius() const {
    return radius;
}

void Circle::setRadius(int radius) {
    Circle::radius = radius;
}

void Circle::print() const {
    std::cout << "Circle radius = " << radius << " , sublcass of " << Shape::print();
    Shape::print();
}

double Circle::getArea() const {
    return radius * radius * PI;
}
