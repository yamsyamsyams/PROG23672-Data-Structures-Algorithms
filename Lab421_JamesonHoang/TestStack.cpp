/*
 * Lab
421 : Implementing and using a generic Stack
•
Implement a generic stack based on an array using
C++. The stack can be used to keep integer, string
or any object. The capacity is 1000 objects. The
stack operations include:
•
Bool isEmpty (), int size(), push(object& o), Object pop(),
Object& top()
•
Write a function to test arrayStack
•
Write a function to reverse a vector
•
Write a main that call the two functions
 */
#include <iostream>
#include <string>
#include <vector>
#include "ArrayStack.h"

using namespace std;

// using the array stack

void use_arrayStack() {
    try {
        ArrayStack<int> a;
        a.push(7);
        a.push(14);
        cout << a.top() << "\n";
        a.pop();

        // use the stack for a string
        ArrayStack<string> b(10);
        b.push("Bob");
        b.push("Alice");
        cout << a.top() << "\n";
        b.pop();

    }
    catch (StackException e) {
        cout << e.getMessage();
    }
}

template<typename E>
void reverse(vector<E> &v) {
    ArrayStack<E> s(v.size());
    for (int i = 0; i < v.size(); i++) {
        s.push(v[i]);
    }
    for (int i = 0; i < v.size(); i++) {
        v[i] = s.top();
        s.pop();
    }
}

int main(){
    use_arrayStack();
    // testing the reverse fucntion
    vector<int> intV(5);
    vector<char> charV(3);

    // populate the integer vector
    for (int i = 0; i < intV.size(); i++){
        intV[i] = i + 1;
    }

    // print it before reverse
    cout << "before reverse \n";
    for(int i = 0; i < intV.size(); i++){
        cout << intV[i] << "\n";
    }
    reverse(intV);

    cout << "after reverse \n";
    for(int i = 0; i < intV.size(); i++){
        cout << intV[i] << "\n";
    }
}