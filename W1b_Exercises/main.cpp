#include <iostream>

using namespace std;

int main() {

    // declare a pointer
    char const *chrPtr = "Sheridan";
    int y;
    int i;
    for (i = 0; i < 8; i++) {
        cout << *chrPtr << " : " << chrPtr << "\n";
        chrPtr++;
    }
//    system("pause"); // better to use read instead.
    system("read");
    return 0;
}
