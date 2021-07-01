//
// Created by ps on 21/06/2021.
//

#ifndef POINT_POINT_H
#define POINT_POINT_H


class Point {
private:
    int x, y;
public:
    Point(int x =0, int y = 0);
    int getX() const;
    void setX(int x);
    int getY() const;
    void setY(int y);
    void setXY(int x, int y);
//    virtual void print() const; // make this virtual function to be ovveriden in the subclass.
/*
 * The keyword virtual determines which method is used if the method is invoked by a pointer (or reference). Without
 * virtual, the program chooses the method based on the pointer type; with virtual, the program chose the method based
 * on the type of the object pointed-to.
 * */
    void print() const;

//    virtual double getArea() = 0;  // abstract function or pure virtual function, to be implemented by a subclass.
};


#endif //POINT_POINT_H
