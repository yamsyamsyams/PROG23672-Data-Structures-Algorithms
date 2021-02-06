#include <iostream>

using namespace std;

int main() {

    void test(int val[], int m);

    int j, list[5];
    for (j = 0; j < 5; j++) {
        list[j] = j;
    }

    test(list, 5);

    for (j = 0; j < 5; j++) {
        cout << list[j] << "\n";
    }

    return 0;
}

void test(int val[], int m) {
    int j;
    for (j = 0; j < m; j++) {
        val[j] += 25;
    }
}