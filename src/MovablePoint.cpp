//
// Created by ps on 21/06/2021.
//

#include "MovablePoint.h"
#include "Point.h"
#include <iostream>

using namespace std;

MovablePoint::MovablePoint(int x, int y, int xSpeed, int ySpeed) : Point(x, y), xSpeed(xSpeed), ySpeed(ySpeed) {

}

int MovablePoint::getXSpeed() const {
    return xSpeed;
}

int MovablePoint::getYSpeed() const {
    return ySpeed;
}

void MovablePoint::setXSpeed(int xSpeed) {
    this->xSpeed = xSpeed;
}

void MovablePoint::setYSpeed(int ySpeed) {
    this->ySpeed = ySpeed;

}

void MovablePoint::move() {
    // Subclass cannot access private member of the superclass directly
    // need to go though the public interface.
    Point::setX(Point::getX() + xSpeed);
    Point::setY(Point::getY() + ySpeed);
}
void MovablePoint::print() const {
    cout << "Movable";
    Point::print();
    cout << " Speed = " << "(" << xSpeed << "," << ySpeed << ")";
}