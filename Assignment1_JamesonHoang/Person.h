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

    string getFirstName(){
        return firstName;
    }
    void setFirstName(string fName){
        firstName = fName;
    }
    string getLastName(){
        return lastName;
    }
    void setLastName(string lName){
        lastName = lName;
    }
    string getNationality(){
        return nationality;
    }
    void setNationality(string nation){
        nationality = nation;
    }

};


#endif //ASSIGNMENT1_JAMESONHOANG_PERSON_H
