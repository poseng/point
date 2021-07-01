//
// Created by ps on 01/07/2021.
//

#ifndef POINT_SHAPE_H
#define POINT_SHAPE_H
#include <string>


class Shape {
private:
    std::string color {"red"};
public:
    Shape(const std::string &color);

    std::string getColor() const;

    void setColor(const std::string &color);
//    virtual function, run subclass version if overriden.
    virtual void print() const;
//    pure vritual function, to be implemented by subclass
    virtual double getArea() const = 0;
};


#endif //POINT_SHAPE_H
