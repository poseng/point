//
// Created by ps on 01/07/2021.
//
/* Test up and down cast */


#include "MovablePoint.h"
#include <iostream>

using namespace std;

int main() {
//    Object pointer
    Point *ptrP1 = new MovablePoint(11, 12, 13, 14);
//    upcast is always permissible and safe
    ptrP1->print();
//    MovablePoint *ptrMP1 = ptrP1; // error: invalid conversion from ‘Point*’ to ‘MovablePoint*’ [-fpermissive]
//    MovablePoint *ptrMP1 = (MovablePoint *) ptrP1; // OK
//    Downcast requires explicit casting operator

//Operator dynamic_cast which return a null pointer if the type cast fail.
    MovablePoint *ptrMP1 = dynamic_cast<MovablePoint *> (ptrP1);
    delete ptrP1;
}