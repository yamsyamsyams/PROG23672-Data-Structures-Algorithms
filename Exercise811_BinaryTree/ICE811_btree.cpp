#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

//const int MaxWordSize = 20;
#define MaxWordSize 20

// a struct for data of a node, single member char word[MaxWordSize+1], named NodeData
typedef struct{
    char word[MaxWordSize + 1]; // benefit of using the const directly is we can quickly change it later if needed,
    // without manually changing values later
    // we add +1 to give space for a '/0' null terminating character
} NodeData;

// define the structure of treenode
typedef struct treeNode {
    NodeData data;
    struct treeNode *left, *right;
} TreeNode, *TreeNodePtr;

// define the binary tree
typedef struct {
    TreeNodePtr root;
} BinaryTree; // a single pointer will suffice for the amount of data we have, we might need two if there is more data

// function to build the tree
TreeNodePtr buildTree(std::fstream *in){ // we use recursion here to fill out the binary tree until there are no more chars left in the string
    char str[MaxWordSize + 1];
    *in >> str;
    if(strcmp(str, "@") == 0 ){
        return NULL;
    }
    TreeNodePtr p = new TreeNode;
    strcpy(p->data.word, str);
//    strcpy_s(p->data.word, str); // was this a mistake and actually meant to place strcpy instead of strcpy_s?
    p->left = buildTree(in);
    p->right = buildTree(in);

    return p;
}

void visit(TreeNodePtr node){
     cout << node->data.word;
}

void preOrder(TreeNodePtr node){
    if (node != NULL){
        visit(node);
        preOrder(node->left);
        preOrder(node->right);
    }
}

int main() {

    BinaryTree bt;
    fstream in;
    in.open("btree.txt");
    if(in.is_open()){
        bt.root = buildTree(&in);
        cout << "\n" << "the pre-order traversal is: ";
        preOrder(bt.root); // print the tree from the memory
    }
    else{
        cout << "cannot open the file";
    }
    return 0;
}
