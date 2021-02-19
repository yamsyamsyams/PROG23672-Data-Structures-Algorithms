//
// Created by jhoan on 2021-02-16.
//

#ifndef LAB611_CIRCLELINKEDLIST_CIRCLELIST_H
#define LAB611_CIRCLELINKEDLIST_CIRCLELIST_H

#include <string>

// define or creat the Node
using namespace std;

typedef string Elem; // element type,
class CNode {
private:
    Elem elem; // represents linked list element value
    CNode *next; // a pointer to next element
    friend class CircleList; // this provides CircleList access and to the Node

};

// define the interface for the CircleList
class CircleList {
public:
    CircleList();

    ~CircleList();

    bool empty() const;

    const Elem &front() const; // element at cursor
    const Elem &back() const; // element following cursor
    void advance();

    void add(const Elem &e);

    void remove();

private:
    CNode *cursor; // the cursor, that points to one of the elements in the LL
};

// implement the CirceList
CircleList::CircleList() : cursor(NULL) { // constructor
}

bool CircleList::empty() const { // is list empty?
    return cursor == NULL;
}

const Elem &CircleList::back() const { // element at the rear/back of the LL
    return cursor->elem;
}

const Elem &CircleList::front() const {
    return cursor->next->elem;
}

void CircleList::advance() {
    cursor = cursor->next;
}

void CircleList::remove() {
    CNode *old = cursor->next;
    if (old == cursor) {
        cursor = NULL; // if there is only one node
    } else {
        cursor->next = old->next; // we would advance the cursor to next, and then delete old.
    }
    delete old;
}

void CircleList::add(const Elem &e) {
    CNode *v = new CNode;
    v->elem = e;
    if (cursor == NULL) {
        v->next = v;
        cursor = v; // if it is the only node, cursor points to itself
    } else {
        v->next = cursor->next;
        cursor->next = v;
    }
}

CircleList::~CircleList() {
    while (!empty()) {
        remove();
    }
}

#endif //LAB611_CIRCLELINKEDLIST_CIRCLELIST_H
