//
// Created by jhoan on 2021-03-01.
//

#ifndef ASSIGNMENT2_PART2_JAMESONHOANG_MYLINKEDLIST_H
#define ASSIGNMENT2_PART2_JAMESONHOANG_MYLINKEDLIST_H

#include "MyExceptions.h"
using namespace std;

template<typename E>
class SNode{
private:
    E elem;
    SNode<E> *next;
    template<class> friend class SLinkedList;
};

template<typename E>
class SLinkedList{
public:
    SLinkedList();
    ~SLinkedList();
    bool empty() const;
    const E& front() const;
    const E& last() const;
    void addFront(const E& e);
    void addLast(const E& e);
    void removeFront();
    void removeLast();
    void print();

private:
    SNode<E>* head;
    SNode<E>* tail;

};

template<typename E>
SLinkedList<E>::SLinkedList():head(NULL){

}

template<typename E>
bool SLinkedList<E>::empty() const{
    return head == NULL;
}

template<typename E>
const E& SLinkedList<E>::front() const {
    return head->elem;
}

template<typename E>
const E& SLinkedList<E>::last() const {
    return tail->elem;
}

template<typename E>
void SLinkedList<E>::addFront(const E &e) {
    SNode<E> *v = new SNode<E>;
    v->elem = e;
    v->next = head;
    head = v;
}

template<typename E>
void SLinkedList<E>::addLast(const E &e) {
    SNode<E> *v = new SNode<E>;
    v->elem = e;
    v->next = NULL;
    tail->next = v;
}

template<typename E>
void SLinkedList<E>::removeFront(){
    SNode<E>* old = head;
    head = old->next;
    delete old;
}

template<typename E>
void SLinkedList<E>::removeLast(){
    if(tail == NULL){
        return;
    }
    else{
        SNode<E>* old = tail;
        if(head == tail){
            head = NULL;
            tail = NULL;
        }
        else{
            SNode<E>* secondLast = head;
            while(secondLast->next != tail){
                secondLast = secondLast->next;
            }
            tail = secondLast;
            tail->next = NULL;
        }
        delete old;
    }
}

template<typename E>
void SLinkedList<E>::print() {
    SNode<E>* current = head;
    while(current != nullptr){
        cout << current->elem << " " << endl;
        current = current->next;
    }
}

#endif //ASSIGNMENT2_PART2_JAMESONHOANG_MYLINKEDLIST_H
