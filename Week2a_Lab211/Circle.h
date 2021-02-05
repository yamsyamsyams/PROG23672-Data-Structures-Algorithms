//
// Created by jhoan on 2021-01-26.
//

#ifndef WEEK2A_LAB211_CIRCLE_H
#define WEEK2A_LAB211_CIRCLE_H

#include <iostream>

using namespace std;

class Circle {
private:

    // define variable members
    int radius;
public:

    // constructors
    Circle(); // default constructor
    Circle(int r); // standard constructor

    // accessors
    int getRadius() const {
        return radius;
    }

    // update functions
    void setRadius(int r) {
        radius = r;
    }

    // other functions
    virtual double getArea() const;

};

// operator overloading (we want to use <, to print the screen like cout<<)
std::ostream &operator<<(std::ostream &out, const Circle &c);

// we want to use the + operator for the circle like x=3+2; C3=c1+c2
Circle &operator+(Circle &fc, Circle &sc);

#endif //WEEK2A_LAB211_CIRCLE_H
