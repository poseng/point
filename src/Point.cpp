//
// Created by ps on 21/06/2021.
//

#include "Point.h"
#include <iostream>
Point::Point(int x, int y) : x(x), y(y) {

}

int Point::getX() const {
    return x;
}

void Point::setX(int x) {
    this->x = x;
}

int Point::getY() const {
    return y;
}

void Point::setY(int y) {
    this->y = y;
}

void Point::setXY(int x, int y) {
    this->x = x;
    this->y = y;
}

void Point::print() const {
    std::cout << "Point @ (" << x << ", " << y << ")";
}
