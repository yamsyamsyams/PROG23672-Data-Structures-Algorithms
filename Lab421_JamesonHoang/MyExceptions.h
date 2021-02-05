//
// Created by jhoan on 2021-02-05.
//

#ifndef LAB421_JAMESONHOANG_MYEXCEPTIONS_H
#define LAB421_JAMESONHOANG_MYEXCEPTIONS_H

#include <string>

using namespace std;

class RuntimeException {
private:
    string errorMsg;
public:
    RuntimeException(const string &err) {
        errorMsg = err;
    }

    string getMessage() const {
        return errorMsg;
    }
};

class StackException : public RuntimeException {
public:
    StackException(const string &err) : RuntimeException(err) {

    }
};

#endif //LAB421_JAMESONHOANG_MYEXCEPTIONS_H
