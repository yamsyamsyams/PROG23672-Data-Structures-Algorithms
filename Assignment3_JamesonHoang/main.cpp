#include <fstream>
#include <iostream>
#include <cstdlib>
#include <string.h>
#include <cstring>

using namespace std;

#define MaxNumberSize 100

// creating a struct for data of a node
typedef struct {
    int number[MaxNumberSize];
    int freq;
} NodeData;

// this is the structure of the treeNode, each node has data + left or right pointers
typedef struct treeNode {
    NodeData data;
    struct treeNode *left, *right;
} treeNode, *TreeNodePtr;

// a binary tree
// ~100 ints here, won't need more than 1 pointer
typedef struct {
    TreeNodePtr root;
} BinarySearchTree;

TreeNodePtr buildTree(int in[]) {
    cout << "in buildTree";

    int num[MaxNumberSize + 1];
    int counter = 0;
    for(int i = 0; i < MaxNumberSize + 1; i++){
        num[i] = in[i];
        counter++;
    }
    if(counter == MaxNumberSize){
       return NULL;
    }

    TreeNodePtr p = new treeNode;
    std::memcpy(p->data.number, in, sizeof(int));
    p->left = buildTree(in);
    p->right = buildTree(in);

    return p;
}

int main() {
    TreeNodePtr newTreeNode(NodeData);
    TreeNodePtr findOrInsert(BinarySearchTree, NodeData);
    void inOrder(TreeNodePtr);

    int numsArray[MaxNumberSize + 1];

    // number of comparisons made in array
    int arrayCmps = 0;

    // number of BST comparisons made
    int bstCmps = 0;

    // user input
    int searchNum = 0;
    BinarySearchTree bst;
    fstream infile;
    bst.root = NULL;

    infile.open("integers.txt");

    // copy ints from the text file to array
    for(int i = 0; i < MaxNumberSize; i++){
        infile >> numsArray[i];
    }

    // comparisons results for array
    cout << "Find number: \n";
    cin >> searchNum;
    for(int i = 0; i < MaxNumberSize; i++){
        arrayCmps++;
        if(numsArray[i] == searchNum){
            break;
        }
    }
    cout << "Comparisons made searching the array: " << arrayCmps << endl;

//     test print seeing if numbers successfully copied to array
    /*cout << "Array numbers: \n";
    for(int i = 0; i < MaxNumberSize; i++){
        cout << numsArray[i] << " ";
    }*/

    cout << "creating bst\n";
    // create bst
    buildTree(numsArray);
    inOrder(bst.root);

    infile.close();

//    inOrder(numsArray2, bst.root);

    return 0;
}

void getNum(fstream *in, char num[]) {
    *in >> num;
}

TreeNodePtr findOrInsert(BinarySearchTree bt, NodeData d) {
    TreeNodePtr newTreeNode(NodeData);

    if (bt.root == NULL) {
        return newTreeNode(d);
    }

    TreeNodePtr curr = bt.root;
    int cmp;

    while (cmp = curr->data.number != 0) {
        if (cmp < 0) {
            if (curr->left == NULL)
                return curr->left = newTreeNode(d);
            curr = curr->left;
        } else {
            if (curr->right == NULL)
                return curr->right = newTreeNode(d);
            curr = curr->right;
        }
    }
    return curr;
}

void inOrder(TreeNodePtr node) {
    cout << "in inOrder";
    if (node != NULL) {
        inOrder(node->left);
        cout << node->data.number << "\n";
        inOrder(node->right);
    }
}

NodeData newNodeData(char str[], int n) {
    NodeData temp;
//    strcpy(temp.number, str);
    temp.freq = n;
    return temp;
}

TreeNodePtr newTreeNode(NodeData d) {
    TreeNodePtr p = new treeNode;
    p->data = d;
    p->left = p->right = NULL;
    return p;
}
