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

vector<Athlete> athleteList;

void CreateAthleteVector() {

    fstream file;
    file.open("jump.txt");
    if (file.is_open()) {
        cout << "The data is loaded successfully\n";
    } else {
        cout << "Error opening file\n";
    }

    string tmpFName;
    string tmpLName;
    string tmpNation;
    string tmpDistance;
    Athlete tmpAthlete;
    string trash;
    getline(file, trash);

    while (!file.eof()) {
        getline(file, trash);
        file >> tmpFName;
        file >> tmpLName;
        file >> tmpNation;
        file >> tmpDistance;

        double tdoubleDistance = stod(tmpDistance);

        tmpAthlete.setFirstName(tmpFName);
        tmpAthlete.setLastName(tmpLName);
        tmpAthlete.setNationality(tmpNation);
        tmpAthlete.setDistance(tdoubleDistance);

        athleteList.push_back(tmpAthlete);
    }
}

void checkDistance(double d) {
    cout << "The athletes who exceeded " << d << "m are: " << endl;
    for (int i = 0; i < athleteList.size(); i++) {
        if (athleteList[i].getDistance() > d) {
            cout << athleteList[i] << "\n";
        }
    }
}

int main() {
//    testPerson();
    CreateAthleteVector();

    double userIn;
    cout << "Please enter the distance threshold: ";
    cin >> userIn;
    while(cin.fail()){
        if(cin.fail()){
            cout << "Invalid input, try again! \n";
        }
        cin.clear();
        cin.ignore();
        cin >> userIn;
    }
    checkDistance(userIn);

    return 0;
}
