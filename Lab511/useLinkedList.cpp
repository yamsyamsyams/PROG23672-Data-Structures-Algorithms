//
// Created by jhoan on 2021-02-09.
//

#include <iostream>
#include "LinkedList.h"
#include "LinkedStack.h"
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

    SLinkedList<int> b; // list of ints
    b.addFront(1);
    b.addFront(2);
    cout << "Integer Linked List" << "\n";
    cout << b.front();

}

void use_LinkedStack(){
    LinkedStack B; // B = [], size = 0
    try{
        B.push("Bob");
        B.push("Alice");
        cout << "\n Linked Stack \n";
        cout << B.top() << endl; B.pop();
        B.push("Eve");
        cout << "\n" << B.top();
    }
    catch(StackException e){
        cout << e.getMessage();
    }
}

int main(){
//    use_LinkedList();
    use_LinkedStack();
    system("pause");
}
