//
// Created by jhoan on 2021-03-26.
//

#ifndef LAB621_CONTAINERS_ITERATORS_NODESEQUENCE_H
#define LAB621_CONTAINERS_ITERATORS_NODESEQUENCE_H

#include "NodeList.h"

// interface
class NodeSequence : public NodeList{
public:
    Iterator atIndex(int i) const; // get position from index
    int indexOf(const Iterator& p) const; // get index from position
};

// implementation
// get position from index
NodeSequence::Iterator NodeSequence::atIndex(int i) const {
    Iterator p = begin();
    for (int j = 0; j < i; j++){
        ++p;
    }
    return p;
}

// get index from position
int NodeSequence::indexOf(const Iterator& p) const {
    Iterator q = begin();
    int j = 0;
    while(q != p){ // until we find p
        ++q; // advance and count hops
        ++j;
    }
    return j;
}

#endif //LAB621_CONTAINERS_ITERATORS_NODESEQUENCE_H
