#include <iostream>

using namespace std;

int main() {
/*
    // prints Hello 10x
    for (int i = 0; i < 10; i++) {
        cout << "Hello" << endl;
    }

    // prints *'s in a pattern top heavy pyramid
    for (int i = 10; i > 0; i -= 2) {
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << "\n";
    }

    // prints pyramid right justified 1 on top
    for (int i = 0; i < 10; i++) {
        for (int j = i; j < 10; j++) {
            cout << " ";
        }
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << "\n";
    }*/

    /* Write a C++ program that gets 10 numbers
    from the user and prints out the sum of the
    positive numbers.*/

    // homework exercise Week1 (last slide)
    int userIn, total;
    cout << "Please enter 10 numbers: " << endl;
    for (int i = 0; i < 10; i++) {
        cin >> userIn;
        total += userIn;
    }
    cout << "Sum of the 10 numbers is: " << total;

    return 0;
}
