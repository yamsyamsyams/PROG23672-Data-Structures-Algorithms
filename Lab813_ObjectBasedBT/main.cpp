#include<iostream>
#include<string>
#include"LinkedBinaryTree.h"
using namespace std;
LinkedBinaryTree::Position buildBinaryTree(char rt, string leftstr, string rightstr) {
    LinkedBinaryTree lbt;
    lbt.addRoot();
    LinkedBinaryTree::Position r = lbt.root();
    *r = rt;
    int i = 0;
    int j = 0;
    LinkedBinaryTree::Position temp = r;
    while (i<leftstr.length()) {
        lbt.expandExternal(temp);
        *(temp.left()) = leftstr[i];
        *(temp.right()) = rightstr[j];
        i++;
        j++;
        temp = temp.left();

    }

    return r;
}

void printBinaryTree(LinkedBinaryTree::Position &r) {
    while (!r.isExternal()) {
        cout << *r;
        cout << *r.left();
        cout << *r.right();
        r = r.left();
    }
}


int main() {
    LinkedBinaryTree::Position r= buildBinaryTree('C',{ 'E','F','G','H'}, { 'A','B','C','D' });
    printBinaryTree(r);

    /*
    cout << *r<< "\n";
    cout << *r.left();
    cout << *r.right()<<"\n";

    cout << *r.left().left();
    cout << *r.left().right()<<"\n";

    cout << *r.right().left();
    cout << *r.right().right()<<"\n";

    cout << *r.right().right().left();
    cout << *r.right().right().right()<<"\n";
     */


}