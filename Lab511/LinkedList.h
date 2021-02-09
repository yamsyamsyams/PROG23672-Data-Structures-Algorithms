//
// Created by jhoan on 2021-02-09.
//

#ifndef LAB511_LINKEDLIST_H
#define LAB511_LINKEDLIST_H

#include "MyExceptions.h"

// define what a node node is
template<typename E>
class SNode {
private:
    E elem;
    SNode<E> *next; // a pointer to next element, SNode is the datatype with structure of <E>
    template<class E> friend
    class SLinkedList; // friend class, make SNode and linkedlist friends

};

// define the interface of the linked list
template<typename E>
class SLinkedList {
public:
    SLinkedList(); // empty constructor
    ~SLinkedList(); // need destructor too
    bool empty() const;

    const E &front() const;

    void addFront(const E &e);

    void removeFront();

private:
    SNode<E> *head; // head of the list, a pointer to the location of the first element

};

// implementation: write the detailed code of each function defined in the interface

template<typename E>
SLinkedList<E>::SLinkedList() // constructor
        : head(NULL) { // initialize a member pointer
}

template<typename E>
SLinkedList<E>::empty() const {
    return head == NULL;
}

template<typename E>
SLinkedList<E>::front() const {
    return head->elem;
}

template<typename E>
SLinkedList<E>::~SLinkedList() {
    while (!empty()) {
        removeFront();
    }
}

template<typename E>
void SLinkedList<E>::addFront(const E &e) {
    SNode<E> *v = new SNode<E>;
    v->elem = e; // pointer assigns new element e to the new node
    v->next = head; // make the new node's "next" pointer point to the current head
    head = v; // assign v of the new node as the new head
}

template<typename E>
void SLinkedList<E>::removeFront() {
    SNode<E>* old = head; // a variable to store the "old" node's information
    head = old->next; // point the head to the "next" value of the current old node's next value which is address of the
    // "2nd in line" of the linkedlist's node that will be the new head after removal
    delete old;
}

#endif //LAB511_LINKEDLIST_H
