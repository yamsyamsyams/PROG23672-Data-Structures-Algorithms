//
// Created by jhoan on 2021-02-10.
//

#ifndef ASSIGNMENT1_JAMESONHOANG_PERSON_H
#define ASSIGNMENT1_JAMESONHOANG_PERSON_H

#include <iostream>
#include <string>
using namespace std;

class Person{
private:
    string firstName;
    string lastName;
    string nationality;
public:
    Person();
    Person(string fn, string ln, string nt);

    string getFirstName() const{
        return firstName;
    }
    void setFirstName(string fName){
        firstName = fName;
    }
    string getLastName() const{
        return lastName;
    }
    void setLastName(string lName){
        lastName = lName;
    }
    string getNationality() const{
        return nationality;
    }
    void setNationality(string nation){
        nationality = nation;
    }

};
std::ostream &operator<<(std::ostream &out, const Person &p);


#endif //ASSIGNMENT1_JAMESONHOANG_PERSON_H
