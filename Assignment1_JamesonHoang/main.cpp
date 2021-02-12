#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "Person.h"
#include "Athlete.h"

using namespace std;

void testPerson() {
    Person *p1 = new Person();
    p1->setFirstName("Jam");
    p1->setLastName("Hoa");
    p1->setNationality("HK");

    cout << *p1;
    delete p1;
}

void CreateAthleteVector() {
    vector<Athlete *> athleteList(3);

    for (int i = 0; i < 3; i++) {
        athleteList[i] = new Athlete("aa", "bb", "cc", 10.0);
    }
    cout << athleteList.size() << " Athletes founds in the list";

    for (int i = 0; i < 3; i++) {
        cout << *athleteList[i] << "\n";
    }

}

int main() {
    CreateAthleteVector();
//    testPerson();


    return 0;
}
