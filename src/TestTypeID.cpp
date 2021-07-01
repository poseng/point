//
// Created by ps on 01/07/2021.
//

/*Test typeid operator, which return an object of type_info*/

#include "MovablePoint.h"
#include <typeinfo>
#include <iostream>

using namespace std;

int main()
{
    Point *ptrP1 = new MovablePoint(11, 12, 13, 14);
    cout << typeid(*ptrP1).name() << endl;

//    MovablePoint *ptrMP1 = dynamic_cast<MovablePoint *> (ptrP1);
//    cout << typeid(*ptrMP1).name() << endl;

    delete ptrP1;

    Point P2;
    cout << typeid(P2).name() << endl;

    MovablePoint mp2(1, 2, 3, 4);
    cout << typeid(mp2).name() << endl;
}
