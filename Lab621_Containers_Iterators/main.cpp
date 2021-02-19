#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm> // for sort, random_shuffle

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
    v.pop_back();
    cout << v.size() << endl;
    v.push_back(19);
    cout << v.front() << " " << v.back() << endl;
    sort(v.begin(), v.begin() + 4);
    v.erase(v.end() - 4, v.end() - 2);
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

int main() {
    use_vector();

    return 0;
}
