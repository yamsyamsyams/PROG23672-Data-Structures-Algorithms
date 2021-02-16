//
// Created by jhoan on 2021-02-09.
//

#ifndef LAB511_MYEXCEPTIONS_H
#define LAB511_MYEXCEPTIONS_H

#include <string>
using namespace std;

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
    StackException(const string& err) : RuntimeException(err){

    }
};


#endif //LAB511_MYEXCEPTIONS_H
