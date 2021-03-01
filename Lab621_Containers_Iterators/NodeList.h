//
// Created by jhoan on 2021-02-23.
//

#ifndef LAB621_CONTAINERS_ITERATORS_NODELIST_H
#define LAB621_CONTAINERS_ITERATORS_NODELIST_H

// NodeList Interface
typedef int Elem; // list base element type
class NodeList {
private:
    struct Node {
        Elem elem; // element value
        Node *prev; // previous in ist
        Node *next; // next in list
    };
public:
    class Iterator {
    public:
        Elem &operator*(); // ref to the element
        bool operator==(const Iterator &p) const; // compare positions
        bool operator!=(const Iterator &p) const;

        Iterator &operator++(); // move to the next position
        Iterator &operator--(); // move to the previous position
        friend class NodeList; // give NodeList access
    private:
        Node *v; // pointer to the node
        Iterator(Node *u); // create from node
    };

// this is the public for the NodeList
public:

    // the interface of the NodeList
    NodeList(); // default constructor
    int size() const; // list size
    bool empty() const; // is the list empty?
    Iterator begin() const; // beginning position
    Iterator end() const; // (just beyond) last
    void insertFront(const Elem &e); // insert at front
    void insertBack(const Elem &e); // insert at rear
    void insert(const Iterator &p, const Elem &e); // insert
    void eraseFront(); // remove first
    void eraseBack(); // remove last
    void erase(const Iterator &p); // remove p
private: // data members
    int n; // number of items
    Node *header; // head of list sentinel
    Node *trailer; // tail of list sentinel
};

// implementation of NodeList
NodeList::NodeList() {
    n = 0; // initiallly empty
    header = new Node; // create sentinels
    trailer = new Node;
    header->next = trailer; // have them point to end points
    header->prev = header;
}

int NodeList::size() const { // list size
    return n;
}

// Iterator methods
NodeList::Iterator::Iterator(Node *u) { // constructor from
    v = u;
}

Elem &NodeList::Iterator::operator*() {  // reference to the
    return v->elem;
}

bool NodeList::Iterator::operator==(const Iterator &p) const {
    return v == p.v;
}

bool NodeList::Iterator::operator!=(const Iterator &p) const {
    return v != p.v;
}

// move to the next position
NodeList::Iterator& NodeList::Iterator::operator++() {
    v = v->next;
    return *this;
}

// if we want to insert e before p
void NodeList::insert(const NodeList::Iterator& p, const Elem& e){
    Node* w = p.v; // p's node
    Node* u = w->prev; // p's predecessor
    Node* v = new Node; // new node to insert
    v->elem = e; // link in v before
    v->next = w; // link in v after

    w->prev = v;
    v->prev = u;

    u->next = v;
    n++;
}

void NodeList::insertFront(const Elem &e) {
    insert(begin(), e);
}

void NodeList::erase(const Iterator &p) { // remove p
   Node* v = p.v; // node to remove
   Node* w = v->next; // successor
   Node* u = v->prev; // predecessor
   u->next = w; // unlink p
   w->prev = u; // unlink p
   delete v; // delete this node
   n--; // one fewer element
}

void NodeList::eraseFront() { // remove first
    erase(begin());
}

void NodeList::insertBack(const Elem &e) {
    insert(end(), e);
}

NodeList::Iterator NodeList::begin() const { // begin position
    return Iterator(header->next);
}

NodeList::Iterator NodeList::end() const { // begin position
    return Iterator(trailer);
}



#endif //LAB621_CONTAINERS_ITERATORS_NODELIST_H
