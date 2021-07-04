//
// Created by ps on 01/07/2021.
//

#include "Circle.h"
#include "Rectangle.h"
#include <iostream>

using namespace std;

int main() {
//    Circle Object
    Circle c1(5, "blue");
    c1.print();
    cout << endl;
    cout << "area = " << c1.getArea() << endl;

//    Rectangle object
    Rectangle r1(5, 6, "green");
    r1.print();
    cout << endl;
    cout << "Area = " << r1.getArea() << endl;
//Shape s1; // cannot create instance of abstract class Shape

// Polymorphism
    Shape *s1, *s2; // Shape pointer
    s1 = new Circle(6); // Dyanmically allocate a subclass instance
    s1->print(); // run subclass version
    cout << endl;
    cout << "Area = " << s1->getArea() << endl;

    s2 = new Rectangle(7, 8);
    s2->print();
    cout << endl;
    cout << "area  = " << s2->getArea() << endl;

    delete s1;
    delete s2;

//    Shape s3 = Circle(6); // error cannot allocate an objet of abstract type 'Shape'

    Circle c3(8);
    Shape & s3 = c3; // Object reference
    s3.print();
    cout << endl;
    cout << "area  = " << s3.getArea() << endl;

}


