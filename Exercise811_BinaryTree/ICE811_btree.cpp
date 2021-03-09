#include <iostream>
#include <cstring>

using namespace std;

const int MaxWordSize = 20;

// a struct for data of a node, single member char word[MaxWordSize+1], named NodeData
typedef struct words {
    char word[MaxWordSize + 1]; // benefit of using the const directly is we can quickly change it later if needed,
    // without manually changing values later
    // we add +1 to give space for a '/0' null terminating character
} Words, *WordsPtr;

typedef struct treenode {
    NodeData data;
    struct treeNode *left, *right;
} TreeNode, *TreeNodePtr;

typedef struct {
    TreeNodePtr root;
} BinaryTree;

TreeNodePtr buildTree(std::fstream *in){
    char str[MaxWordSize + 1];
    *in>>str;
    if(strcmp(str, "@") == 0 ){
        return NULL;
    }
    TreeNodePtr p = new TreeNode;
    strcpy_s(p->data.word, str);
    p->left = buildTree(in);
    p->right = buildTree(in);
    return p;
}

int main() {


    return 0;
}
