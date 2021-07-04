//
// Created by ps on 01/07/2021.
//

#include "Shape.h"
#include <iostream>


std::string Shape::getColor() const {
    return color;
}

void Shape::setColor(const std::string &color) {
    Shape::color = color;
}

void Shape::print() const {
    std::cout << "Shape of color=" << color;
}

Shape::Shape(const std::string &color) : color(color) {}

Shape::~Shape() {

}

