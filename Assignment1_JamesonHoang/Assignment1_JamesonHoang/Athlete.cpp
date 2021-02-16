//
// Created by jhoan on 2021-02-10.
//

#include "Athlete.h"
#include "Person.h"

using namespace std;

Athlete::Athlete() {
    jumpDistance = 0.0;
}

Athlete::Athlete(string fn, string ln, string nt, double d) : Person(fn, ln, nt) {
    jumpDistance = d;
}

std::ostream& operator<<(std::ostream& out, const Athlete&a) {
    out << "Athlete: \n First Name: " << a.getFirstName() << "\n Last Name: " << a.getLastName() <<
    "\n Nationality: " << a.getNationality() << "\n Jump Distance: " << a.getDistance();
    return out;
}
