#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

// define a class
class Record{
private:
    string name;
    int age;
public:
    Record(){

    }
    string getName(){
        return name;
    }
    int getAge(){
        return age;
    }
    void setName(string n){
        name = n;
    }
    void setAge(int a){
        age = a;
    }
};

//overload the operator << to be used for printing the record Objects
ostream& operator<<(ostream& out, Record& r) {
    out << r.getName() << "\t" << r.getAge() << "\n";
    return out;
}

//define vector of record to keep the data in the memory
vector<Record> myRecords;

void readRecordsFromFile() {

    //open file
    fstream myFile;
    myFile.open("data.txt");

    //define temporary variables that hold data until stored into the vector
    string tmpName;
    string tmpAge;
    Record tmpRecord;
    cout << "Retrieving" << endl;

    // the eof() checks the end of file every round in the while loop
    // and continue to read until the end of the file
    while (!myFile.eof()) {

        // read data from the file using the operator >>
        // the operator >> read letters from the current position of file pointer until the first white space
        myFile >> tmpName;
        myFile >> tmpAge;

        int tintAge = stoi(tmpAge); // convert tmpAge to an integer

        // update the tmpRecord with the information that has been read from the file
        tmpRecord.setName(tmpName);
        tmpRecord.setAge(tintAge);

        //insert the tmp record into  the vector
        myRecords.push_back(tmpRecord);

    }

    //print data from the vector
    for (int i = 0; i < myRecords.size();i++)
        cout<< myRecords[i];

}

int main() {
    readRecordsFromFile();
    return 0;
}
