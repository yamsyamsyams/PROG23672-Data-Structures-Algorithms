//
// Created by jhoan on 2021-01-26.
//

#include <iostream>
#include "Circle.h"

// the implementation of Circle() constructor
Circle::Circle() {
    radius = 2;
}

Circle::Circle(int r) {
    radius = r;
}

double Circle::getArea() const {
    return 3.14 * radius * radius;
}

// the implementation of the operator <<
std::ostream &operator<<(std::ostream &out, const Circle &c) {
    out << "A circle Object: \n radius = " << c.getRadius() << "\n Area: " << c.getArea() << "\n";
    return out;
}

// Lab214
Circle &operator+(Circle &fc, Circle &sc) {
    // we will provide c++ with the steps to get the sum of two circle objects
    int newRadius = fc.getRadius() + sc.getRadius();
    Circle *s = new Circle(); // this will be created in the heap
    s->setRadius(newRadius);
    return *s;
}