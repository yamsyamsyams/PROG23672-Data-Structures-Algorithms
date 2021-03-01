//
// Created by jhoan on 2021-03-01.
//

#ifndef ASSIGNMENT2_PART2_JAMESONHOANG_MYEXCEPTIONS_H
#define ASSIGNMENT2_PART2_JAMESONHOANG_MYEXCEPTIONS_H

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
class LinkedListException : public RuntimeException {
public:
    LinkedListException(const string& err) : RuntimeException(err) {

    }
};


#endif //ASSIGNMENT2_PART2_JAMESONHOANG_MYEXCEPTIONS_H
