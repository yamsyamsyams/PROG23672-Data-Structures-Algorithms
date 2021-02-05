//
// Created by jhoan on 2021-01-26.
//

#include "Cylinder.h"
#include "Circle.h"

using namespace std;

Cylinder::Cylinder(int r, int h) : Circle(r) {
    height = h;
}
double Cylinder::getArea() const{
    return 3.14 * height * getRadius() * getRadius();
}

std::ostream