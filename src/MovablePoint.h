//
// Created by ps on 21/06/2021.
// Header for Moving 3D Points with int coords
//

#ifndef POINT_MOVABLEPOINT_H
#define POINT_MOVABLEPOINT_H

#include "Point.h"  // Include header of base class

class MovablePoint : public Point { // MovablePoint is a subclass of Point in a Public-Inheritance
private:
    int xSpeed, ySpeed;
public:
    MovablePoint(int x, int y, int xSpeed = 0, int ySpeed = 0);
    int getXSpeed() const;
    int getYSpeed() const;
    void setXSpeed(int xSpeed);
    void setYSpeed(int ySpeed);
    void move();
    void print() const;
};

#endif //POINT_MOVABLEPOINT_H
