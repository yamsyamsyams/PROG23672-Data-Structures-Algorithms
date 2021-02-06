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

std::ostream& operator<<(std::ostream& out, const Cylinder&cy) {
    out << " A cylinder object: \n radius=" << cy.getRadius() << "\n height=" << cy.getHeight() << "\n Area=" << cy.getArea();
    return out;

}