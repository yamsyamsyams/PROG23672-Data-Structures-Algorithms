//
// Created by jhoan on 2021-02-12.
//

#ifndef LAB511_LINKEDSTACK_H
#define LAB511_LINKEDSTACK_H

#include "LinkedList.h"
#include "MyExceptions.h"
#include <string>

// interface of the linkedStack that will use the linkedlist as a basic building unit
typedef string Elem;

class LinkedStack {
public:
    LinkedStack(); // constructor

    int size() const; // number of items in the stack

    bool empty() const; // check if the stack is empty

    const Elem &top() const throw(StackException); // the top element

    void push(const Elem &e); // push element onto the stack

    void pop() throw(StackException); // pop the stack

private:

    SLinkedList<Elem> S; // linked list of elements
    int n; // number of elements

};

// implement the linkedStack
LinkedStack::LinkedStack() : S(), n(0) {

} // constructor

int LinkedStack::size() const {
    return n;
}

bool LinkedStack::empty() const {
    return n == 0;
} // returns true when n, stack is empty

const Elem& LinkedStack::top() const throw(class StackException) {
    if(empty()) throw StackException("top of empty stack");
    return S.front();
}

void LinkedStack::push(const Elem &e) {
    ++n;
    S.addFront(e);
} // push element onto the stack

void LinkedStack::pop() throw(class StackException) {
    if (empty()) throw StackException("Pop from empty stack");
    --n;
    S.removeFront();
}

#endif //LAB511_LINKEDSTACK_H
