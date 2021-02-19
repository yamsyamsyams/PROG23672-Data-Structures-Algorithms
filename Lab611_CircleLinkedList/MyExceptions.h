//
// Created by jhoan on 2021-02-16.
//

#ifndef LAB611_CIRCLELINKEDLIST_MYEXCEPTIONS_H
#define LAB611_CIRCLELINKEDLIST_MYEXCEPTIONS_H
#include <string>
using namespace std;

// implement exceptions
class RuntimeException{
private:
    string errorMsg;
public:
    RuntimeException(const string& err){
        errorMsg = err;
    }
    string getMessage() const {
        return errorMsg;
    }
};

class StackException : public RuntimeException{
public:
    StackException(const string& err) : RuntimeException(err){}
};

class QueueException : public RuntimeException{
public:
    QueueException(const string& err) : RuntimeException(err){}
};

#endif //LAB611_CIRCLELINKEDLIST_MYEXCEPTIONS_H
