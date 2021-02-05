//
// Created by jhoan on 2021-01-26.
//

#ifndef WEEK2A_LAB211_CYLINDER_H
#define WEEK2A_LAB211_CYLINDER_H

#include <iostream>
#include "Circle.h"

// interface of Cylinder class

class Cylinder : public Circle {


private:
    int height;
public:
    Cylinder(int r, int h);

    //accessor
    int getHeight() const {
        return height;
    }

    // update
    void setHeight(int h) {
        height = h;
    }

    virtual double getArea() const;

};
std::ostream & operator<<(std::ostream& out, const Cylinder&);

#endif //WEEK2A_LAB211_CYLINDER_H
