//
// Created by jhoan on 2021-02-10.
//

#ifndef ASSIGNMENT1_JAMESONHOANG_ATHLETE_H
#define ASSIGNMENT1_JAMESONHOANG_ATHLETE_H

#include <iostream>
#include "Person.h"

class Athlete : public Person {
private:
    double jumpDistance;
public:
    Athlete(string fn, string ln, string nt, double d);

    double getDistance() const{
        return jumpDistance;
    }

    void setDistance(double d){
        jumpDistance = d;
    }
};
std::ostream & operator<<(std::ostream& out, const Athlete&);

#endif //ASSIGNMENT1_JAMESONHOANG_ATHLETE_H
