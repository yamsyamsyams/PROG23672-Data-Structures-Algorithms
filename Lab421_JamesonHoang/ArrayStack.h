//
// Created by jhoan on 2021-02-05.
//

#ifndef LAB421_JAMESONHOANG_ARRAYSTACK_H
#define LAB421_JAMESONHOANG_ARRAYSTACK_H

#include "MyExceptions.h"

// implement the stack
using namespace std;

template<typename E>

class ArrayStack {
private:
    int capacity; // actual length of the stack array
    E *S; // the stack array
    int t; // member variable the represents the index of the top element in the stack
public:
    ArrayStack(int capacity = 1000); // Constructor
    int size() const; // returns the number of elements
    bool empty() const; // will answer the question is the stack empty
    const E &top() const throw(StackException); // get the top element
    void push(const E &e) throw(StackException); // push an element to the stack
    void pop() throw(StackException);
};

// stack implementation
// constructor

template<typename E>
ArrayStack<E>::ArrayStack(int capacity):S(new E[capacity]), capacity(capacity), t(-1) {}

template<typename E>
int ArrayStack<E>::size() const {
    return (t + 1);
}

template<typename E>
bool ArrayStack<E>::empty() const {
    return (t < 0);
}

template<typename E>
const E &ArrayStack<E>::top() const throw(StackException) {
    if (empty()) throw StackException("Top of empty stack");
    return S[t];
}

template<typename E>
void ArrayStack<E>::push(const E &e) throw(StackException) {
    if (size() == capacity) throw StackException("Push to Full Stack");
    S[++t] = e;
}

template<typename E>
void ArrayStack<E>::pop() throw(StackException) {
    if (empty()) {
        throw StackException("pop from empty stack");
    }
    --t;
}

#endif //LAB421_JAMESONHOANG_ARRAYSTACK_H
