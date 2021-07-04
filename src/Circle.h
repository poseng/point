//
// Created by ps on 01/07/2021.
//

#ifndef POINT_CIRCLE_H
#define POINT_CIRCLE_H
#include "Shape.h"
// The class Circle is a subclass of Shape

class Circle : public Shape {
private:
    int radius;
public:
    Circle(int radius =1, const std::string & color = "red");

    int getRadius() const;

    void setRadius(int radius);

    virtual void print() const;

    virtual double getArea() const;

    virtual ~Circle();

};


#endif //POINT_CIRCLE_H
