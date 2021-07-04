#include <iostream>
#include "Point.h"
#include <vector>

int main() {
    Point p1;
    Point p2(2, 2);
    p1.print();
    std::cout << std::endl;
    p2.print();
    std::cout << std::endl;

    //    Object Pointer with dynamic allocation
    Point *ptrP3, *ptrP4;
    ptrP3 = new Point();
    ptrP4 = new Point(4, 4);
    ptrP3->print();
    std::cout << std::endl;
    (*ptrP3).print();
    std::cout << std::endl;
    ptrP4->print();

    // Remove storage via delete
    delete ptrP3;
    delete ptrP4;

    //    Object reference (Alias)
    Point &p5 = p2;
    p5.print();
    std::cout << std::endl;

    // ARRAYS
    Point ptrsArray[2];
    ptrsArray[0].print();
    std::cout << std::endl;
    ptrsArray[1].print();

    ptrsArray[1].setXY(1, 2);
    (ptrsArray + 1)->print();
    std::cout << std::endl;


    Point ptrsArray2[3] = {Point(21, 21), Point(22, 22), Point(23, 23)};

    for (int i = 0; i < 3; ++i) {
        ptrsArray2[i].print();
        std::cout << std::endl;
    }


    // Array of Objects Pointers - needs to allocate elements dynamically
    Point *ptrsArray3 = new Point[2];
    ptrsArray3[0].setXY(31, 31);
    ptrsArray3->print();

    std::cout << std::endl;

    (ptrsArray3 + 1)->setXY(32, 32);
    ptrsArray3[1].print();
    std::cout << std::endl;
    // Free storage
    delete[] ptrsArray3;
    // C++ does not support Array of reference.

    std::vector<Point> vecPoint;
    for (int i = 0; i < 100; ++i) {
        vecPoint.push_back(Point(i, i + 1));
    }

    for (auto p : vecPoint) {
        p.print();
        std::cout << std::endl;
    }

    std::cout << sizeof(vecPoint) << std::endl;
}
