#include <iostream>

using namespace std;

int main() {

    // using a variable
    /*void test(int var);
    int myVar = 50;
    cout << myVar << "\n";
    test(myVar);
    cout << myVar << "\n";*/

    // using a pointer
    void test(int *pointer);
    int myVar = 50;
    cout << myVar<<"\n";
    test(&myVar);
    cout << myVar<<"\n";

    return 0;
}

// passing variable
/*void test(int var) {
    var = var * 2;
    cout << var << "\n";
}*/

// passing pointer
void test(int* var) {
    *var = *var * 2;
    cout << *var << "\n";
}
