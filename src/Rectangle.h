//
// Created by ps on 01/07/2021.
//

#ifndef POINT_RECTANGLE_H
#define POINT_RECTANGLE_H
#include "Shape.h"

class Rectangle : public Shape {
private:
    int lenght;
    int width;
public:
    Rectangle(int lenght = 1, int width = 1, const std::string & color = "red");

    int getLenght() const;

    void setLenght(int lenght);

    int getWidth() const;

    void setWidth(int width);

    virtual void print() const;

    virtual double getArea() const;

};


#endif //POINT_RECTANGLE_H
