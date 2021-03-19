#include <iostream>
#include <fstream>

#define N 23 // the size of the hash table
#define Empty 0

using namespace std;

// lineprobing builds a hash table and uses lineprobing to resolve collisions
void lineprobing() {

    // open the file
    fstream infile;
    infile.open("numbers.txt");
    if (!infile.is_open()) {
        cout << " Cannot open the file";
        exit(1);
    }

    //declare the hash table and other variables
    int j, key, num[N + 1];

    // set all elements of the table to 0
    for (j = 1; j <= N; j++) {
        num[j] = Empty;
    }

    int distinct = 0;
    while (!infile.eof()) {

        // read a number (key)
        infile >> key;

        // apply the hash function to the key to determine the location
        int loc = (key % N) + 1;

        // if it is a collision, calculate a new location by the hash function
        while (num[loc] != Empty && num[loc] != key){ // this is a collision
            loc = (loc % N) + 1;
            while( loc > N){
                loc = loc - N;
            }
        }

        // no collision
        if(num[loc] == Empty){
            if((distinct == N -1 )){
                cout << "Table is full";
                exit(1);
            }

            // at this point, we are sure that the location is empty
            num[loc] = key;
            distinct++;
        }
    }
    cout << "There are " << distinct << " distinct numbers in the file" << "\n";
    infile.close();
}

int main(){
    lineprobing();
}
