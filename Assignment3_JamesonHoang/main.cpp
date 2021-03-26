#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

#define MaxNumberSize 100

// creating a struct for data of a node
typedef struct{
    char number[MaxNumberSize + 1];
    int freq;
} NodeData;

// this is the structure of the treeNode, each node has data + left or right pointers
typedef struct treeNode{
    NodeData data;
    struct treeNode *left, *right;
} TreeNode, *TreeNodePtr;

// a binary tree
// ~100 ints here, won't need more than 1 pointer
typedef struct{
    TreeNodePtr root;
} BinarySearchTree;

TreeNodePtr buildTree(fstream *in){
    char num[MaxNumberSize + 1];
    *in >> num;
    if(in->eof()){
        return NULL;
    }
    TreeNodePtr p = new TreeNode;
    strcpy(p->data.number, num);
    p->left = buildTree(in);
    p->right = buildTree(in);

    return p;
}

void visit(TreeNodePtr node){
    cout << node->data.number << " ";
}

int main() {



    return 0;
}
