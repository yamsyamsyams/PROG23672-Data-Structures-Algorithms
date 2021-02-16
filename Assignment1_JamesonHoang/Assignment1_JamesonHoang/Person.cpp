//
// Created by jhoan on 2021-02-10.
//

#include <iostream>
#include "Person.h"

Person::Person() {
    firstName ="";
    lastName = "";
    nationality = "";
}

Person::Person(string fn, string ln, string nt) {
    firstName = fn;
    lastName = ln;
    nationality = nt;
}

std::ostream &operator<<(std::ostream &out, const Person &p) {
    out << "A Person Object: \n First Name: " << p.getFirstName() << "\n Last Name: " << p.getLastName() << "\n Nationality: " << p.getNationality();
    return out;
}