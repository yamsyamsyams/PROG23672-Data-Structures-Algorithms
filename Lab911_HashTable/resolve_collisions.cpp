#include <iostream>
#include <fstream>

#define N 23 // the size of the hash table
#define NC 12 // number of chains
#define Empty 0

using namespace std;

// lineprobing builds a hash table and uses lineprobing to resolve collisions
void lineprobing() {

    // open the file
    fstream infile;
    infile.open("numbers.txt");
    if (!infile.is_open()) {
        cout << " Cannot open the file";
        exit(1);
    }

    //declare the hash table and other variables
    int j, key, num[N + 1];

    // set all elements of the table to 0
    for (j = 1; j <= N; j++) {
        num[j] = Empty;
    }

    int distinct = 0;
    while (!infile.eof()) {

        // read a number (key)
        infile >> key;

        // apply the hash function to the key to determine the location
        int loc = (key % N) + 1;

        // if it is a collision, calculate a new location by the hash function
        while (num[loc] != Empty && num[loc] != key) { // this is a collision
            loc = (loc % N) + 1;
            while (loc > N) {
                loc = loc - N;
            }
        }

        // no collision
        if (num[loc] == Empty) {
            if ((distinct == N - 1)) {
                cout << "Table is full";
                exit(1);
            }

            // at this point, we are sure that the location is empty
            num[loc] = key;
            distinct++;
        }
    }
    cout << "There are " << distinct << " distinct numbers in the file" << "\n";
    infile.close();
}

// resolving build using quadratic probing
void qprobing() {

    // open the file
    fstream infile;
    infile.open("numbers.txt");
    if (!infile.is_open()) {
        cout << "Cannot open the file";
        exit(1);
    }

    // declare the hash table and other variables
    int j, key, num[N + 1];

    // set all elements of the table to 0
    for (j = 1; j <= N; j++) {
        num[j] = Empty;
    }

    int distinct = 0; // this will keep the count of distinct
    while (!infile.eof()) {

        // read a key
        infile >> key; // read a number from the file and store it // apply the hash function to the key

        int loc = (key % N) + 1;

        // if it is a collision, calculate a new location
        int i = 0;
        while (num[loc] != Empty && num[loc] != key) { // this
            loc = loc + i + i * i;
            i++;
            while (loc > N){
                loc = loc - N;
            }
        }

        // no collision
        if (num[loc] == Empty) {
            if ((distinct == N - 1)) {
                cout << "Table is full";
                exit(1);
            }

            // at this point, we are sure that the location is
            num[loc] = key;
            distinct++;
        }
    }
    cout << "There are " << distinct << " Q_probing distinct numbers";
    infile.close();
}

// define the chain node
typedef struct node {
    int num;
    struct node *next;
} Node, *NodePtr;

// create a new element to be inserted into the hash table
NodePtr newNode(int n) {
    NodePtr p = (NodePtr) malloc(sizeof(Node)); // new Node
    p->num = n;
    p->next = NULL;
    return p;
}

// a function that searches for a key into the hash table
int search(int inkey, NodePtr hash[], int n) {
    // if inkey is found, this function returns 1
    // otherwise it inserts a new node with they key in the app

    int k = inkey % n + 1;
    NodePtr curr = hash[k];
    NodePtr prev = NULL;
    while (curr != NULL && inkey > curr->num) {
        prev = curr;
        curr = curr->next;
    }
    if (curr != NULL && inkey == curr->num) {
        return 1;
    } else {

        // not found, insert it
        NodePtr np = newNode(inkey);
        np->next = curr;
        if (prev == NULL) {
            hash[k] = np; // adding the first node into the linked list
        } else {
            prev->next = np;
        }
        return 0;
    }
}

void printlist(NodePtr top) {
    while (top != NULL) {
        cout << top->num << "-->";
        top = top->next;
    }
    cout << "\n";
}

void chaining() {
    int j, key;
    fstream infile;
    infile.open("numbers.txt");
    if (!infile.is_open()) {
        cout << "Cannot open the file";
        system("pause");
        exit(1);
    }

    // declare (define) the hash table as an array of pointers
    NodePtr hash[NC + 1];

    // initialize the hash table elements to NULL
    for (j = 1; j <= NC; j++) {
        hash[j] = NULL;
    }
    int distinct = 0;
    while (!infile.eof()) {
        infile >> key;
        if (!search(key, hash, NC)) {
            distinct++;
        }
    }

    // print the result
    cout << "\n" << "There are " << distinct << " distinct numbers" << "\n";

    // print the hash table itself
    for (j = 1; j <= NC; j++) {
        if (hash[j] != NULL) {
            cout << "hash[" << j << "]: ";
            printlist(hash[j]);
        }
    }
    infile.close();

}

int main() {
    lineprobing();
    qprobing();
    chaining();

}
