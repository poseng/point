//
// Created by ps on 21/06/2021.
//

#include "MovablePoint.h"
#include "Point.h"
#include <iostream>

using namespace std;

int main() {
    Point p1(4, 5);
    p1.print();
    cout << endl;


    MovablePoint mp1(11, 22);
    mp1.print();
    cout << endl;
    mp1.setXSpeed(8);
    mp1.move();
    mp1.print();
    cout << endl;

}