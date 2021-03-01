#include <iostream>
#include <stdlib.h>
#include <string.h>

#include "MyLinkedList.h"
#include "MyExceptions.h"

using namespace std;

void use_LinkedList(){
    SLinkedList<int> a;
    int ranNum;

    for(int i = 0; i < 50; i++){
        ranNum = rand() % 100 + 1;
        a.addFront(ranNum);
    }
    cout << "Random Integers: " << endl;
    a.print();

    SLinkedList<string> b;
    for(int i = 0; i < 100; i++){
        ranNum = rand() % 100 + 1;
        string s = to_string(ranNum);
        b.addFront("Customer " + s);
    }
    cout << endl;
    cout << "Random Customers: " << endl;
    b.print();
}

int main() {
    use_LinkedList();

    return 0;
}
