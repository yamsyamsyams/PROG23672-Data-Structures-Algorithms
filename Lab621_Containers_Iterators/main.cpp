#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm> // for sort, random_shuffle
#include "NodeSequence.h"

using namespace std;

// access the vector elements using the indices
int vectorSum1(const vector<int> &V) {
    int sum = 0;
    for (int i = 0; i < V.size(); i++) {
        sum += V[i];
    }
    return sum;
}

// access the vector elements using Iterator
int vectorSum2(vector<int> V) {

    // define the Iterator itself
    typedef vector<int>::iterator Iterator; // Iterator is a user defined data type
    int sum = 0;
    for (Iterator p = V.begin(); p != V.end(); ++p) {
        sum += *p;
    }
    return sum;
}


int vectorSum3(const vector<int> &V) {
    typedef vector<int>::const_iterator ConstIterator;
    int sum = 0;
    for (ConstIterator p = V.begin(); p != V.end(); ++p) {
        sum += *p;
    }
    return sum;
}

void use_vector() {
    cout << "this is a demonstration for using vectors and iterators of STL\n";
    int a[] = {23, 11, 44, 45, 85, 77};
    vector<int> v(a, a + 6); // outputs 23 11 44 45 85 77
    cout << v.size() << endl; // outputs: 6
    v.pop_back(); // 23, 11, 44, 45, 85
    cout << v.size() << endl; // now outputs 5
    v.push_back(19); // 23, 11, 44, 45, 85, 19
    cout << v.front() << " " << v.back() << endl;
    sort(v.begin(), v.begin() + 4); // sorts first 4 elements, result: 11, 23, 44, 45, 85, 19
    v.erase(v.end() - 4, v.end() - 2); // result: 11, 23, 85, 19
    cout << v.size() << endl;

    cout << " Vector sum 1: " << vectorSum1(v) << "\n";
    cout << " Vector sum 2: " << vectorSum2(v) << "\n";
    cout << " Vector sum 3: " << vectorSum3(v) << "\n";

    char b[] = {'b', 'r', 'a', 'v', 'o'}; // w: b r a v o
    vector<char> w(b, b + 5);
    random_shuffle(w.begin(), w.end());
    w.insert(w.begin(), 's');

    for (vector<char>::iterator p = w.begin(); p != w.end(); ++p){
        cout << *p << " ";
    }
    cout << endl;
    cout << " End of vector demonstration";
}

void bubbleSort1(NodeSequence& S){
    int n = S.size();
    for(int i  = 0; i < n; i++){
        for(int j = 1; j < n - i; j++){
            NodeSequence::Iterator prec = S.atIndex(j - 1); // predecessor
            NodeSequence::Iterator succ = S.atIndex(j); // successor
            if(*prec > * succ){ // swap if out of order
                int tmp = *prec;
                *prec = *succ;
                *succ = tmp;
            }
        }
    }
}

int main() {
//    use_vector();
    NodeSequence s;
    vector<int> v;
    s.insertFront(40);
    s.insertFront(100);
    s.insertFront(60);
    cout << "sequence \n";

    for (int i = 0; i < s.size(); i++){
        NodeSequence::Iterator p = s.atIndex(i);
        cout << *p << "\n";
    }
    bubbleSort1(s);

    cout << "sequence after sorting \n";
    for (int i = 0; i < s.size(); i++){
        NodeSequence::Iterator p = s.atIndex(i);
        cout << *p << "\n";
    }

//    system("pause");
    return 0;
}