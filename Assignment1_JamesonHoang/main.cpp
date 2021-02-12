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

//        cout << tmpFName << "\n";
//        cout << tmpLName << "\n";
//        cout << tmpNation << "\n";
//        cout << tmpDistance << "\n";

        double tdoubleDistance = stod(tmpDistance);

        tmpAthlete.setFirstName(tmpFName);
        tmpAthlete.setLastName(tmpLName);
        tmpAthlete.setNationality(tmpNation);
        tmpAthlete.setDistance(tdoubleDistance);

        athleteList.push_back(tmpAthlete);
    }

    for (int i = 0; i < athleteList.size(); i++) {
        cout << athleteList[i] << "\n";
    }
}

void checkDistance(double d){
    for(int i = 0; i < athleteList.size(); i++){
        if(d > athleteList[i].getDistance()){
            cout << athleteList[i] << "\n";
        }
    }
}

int main() {
    CreateAthleteVector();

    double userIn;
    cout << "Please enter the distance threshold: " << endl;
    cin >> userIn;
//    checkDistance(userIn);

//    testPerson();


    return 0;
}
