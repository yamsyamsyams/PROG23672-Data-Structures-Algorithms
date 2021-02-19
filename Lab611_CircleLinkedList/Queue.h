//
// Created by jhoan on 2021-02-16.
//

#ifndef LAB611_CIRCLELINKEDLIST_QUEUE_H
#define LAB611_CIRCLELINKEDLIST_QUEUE_H
#include <string>
#include "CircleList.h"
#include "MyExceptions.h"

// interface of the queue
typedef string Elem;

class LinkedQueue {
public:
    LinkedQueue();
    int size() const;
    bool empty() const;
    const Elem& front() const throw(QueueException);
    void enqueue(const Elem& e);
    void dequeue() throw(QueueException);
private:
    CircleList C;
    int n; // number of elements
};

// implementations
LinkedQueue::LinkedQueue() : C(), n(0) {

}

int LinkedQueue::size() const {
    return n;
}

bool LinkedQueue::empty() const {
    return n == 0;
}

// get the front element
const Elem& LinkedQueue::front() const throw(QueueException) {
    if(empty()){
        throw QueueException("front of empty queue");
    }
    return C.front();
}

void LinkedQueue::enqueue(const Elem &e) {
    C.add(e); // insert after cursor, then advance
    C.advance();
    n++;
}

void LinkedQueue::dequeue() throw(QueueException) {
    if(empty()) {
        throw QueueException("dequeue of empty queue");
    }
    else{
        C.remove();
        n--;
    }
}

#endif //LAB611_CIRCLELINKEDLIST_QUEUE_H
