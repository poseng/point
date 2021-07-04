//
// Created by ps on 01/07/2021.
//

#include "Rectangle.h"
#include <iostream>
Rectangle::Rectangle(int lenght, int width, const std::string &color) : Shape(color), lenght(lenght), width(width) {}

int Rectangle::getLenght() const {
    return lenght;
}

void Rectangle::setLenght(int lenght) {
    Rectangle::lenght = lenght;
}

int Rectangle::getWidth() const {
    return width;
}

void Rectangle::setWidth(int width) {
    Rectangle::width = width;
}

void Rectangle::print() const {
    std::cout << "Rectangle lenght = " << lenght << " width = " << width << " , subclass of ";
    Shape::print();
}

double Rectangle::getArea() const {
    return width * lenght;
}
