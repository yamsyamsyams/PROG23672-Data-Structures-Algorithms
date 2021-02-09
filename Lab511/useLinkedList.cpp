//
// Created by jhoan on 2021-02-09.
//

#include <iostream>
#include "LinkedList.h"
#include "MyExceptions.h"
using namespace std;

void use_LinkedList(){
    SLinkedList<string> a; // a list of strings
    a.front();
    a.addFront("abc");
    a.addFront("bbc");
    cout << "\n";
    cout << "String LInked List" << "\n";
    cout << a.front();
    cout << "\n";
    a.removeFront();
    cout << a.front();
    cout << "\n";
}

int main(){
    use_LinkedList();
}
