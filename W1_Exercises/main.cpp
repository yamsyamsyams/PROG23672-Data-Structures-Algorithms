#include <iostream>

using namespace std;

int main() {

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
    }

    return 0;
}
