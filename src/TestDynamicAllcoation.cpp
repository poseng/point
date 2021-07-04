//
// Created by ps on 21/06/2021.
//
/* A test driver for dynamics allocation */

#include <iostream>
#include "Point.h"
using namespace std;

int main(){
    Point *ptr1;
    ptr1 = new Point();
    ptr1->print();
    cout << endl;

    Point *ptr2 = new Point(2, 2);
    ptr2->print();
    cout << endl;
    delete ptr1;
    delete ptr2;

    // Array of Dynamic object

    Point *ptrPtsArray =  new Point[2];
    ptrPtsArray[1].setXY(31, 31);
    ptrPtsArray[1].print();
    cout << endl;
    delete[] ptrPtsArray;
}