//
// Created by ps on 21/06/2021.
//

// Test a substitute a subclass instance to a superclass reference

#include "MovablePoint.h"
#include <iostream>

using namespace std;

int main() {
    //    Substitue a subclass instance to a superclass
    // reference

    // using object pointer
    Point *ptrP1 = new MovablePoint(11, 12, 13, 14); // upcast
    ptrP1->print();
    cout << endl;

    //    ptrP1->move();

    delete ptrP1;

    //    Using object reference
    MovablePoint mp2(21, 22, 23, 24);
    Point &p2 = mp2;  // upcast
    p2.print();  // run superclass version
    cout << endl;

    //    Uisng object with explicit constructor
    Point p3 = MovablePoint(31, 32, 33, 34);
    p3.print(); /// run the superclass version
    cout << endl;

}
