// This program is developed to do frequency count of words in a file
// The algorithm for doing this is as follows
// create empty tree (root is set to NULL)
// while(there is another word){
//    get the word
//    search for the word: insert if necessary and set frequency to 0
//    add 1 to the frequency
//  }
// print frequencies

#include <iostream>
#include <fstream>
#include <string.h>
#include <cstring>

#define MaxWordSize 20

using namespace std;
// a new data type for the data
typedef struct {
    char word[MaxWordSize + 1];
    int freq;
}NodeData;

// define the tree node
typedef struct treeNode {
    NodeData data;
    struct treeNode* left, * right;
}TreeNode, * TreeNodePtr;

// declare the binary tree
typedef struct {
    TreeNodePtr root;
}BinarySearchTree;

int main() {
    void getWord(fstream * infile, char[]);
    TreeNodePtr newTreeNode(NodeData);
    NodeData newNodeData(char[], int);
    TreeNodePtr findOrInsert(BinarySearchTree, NodeData);
    void inOrder(fstream * outfile, TreeNodePtr);

    char word[MaxWordSize + 1];
    // open the file
    fstream infile;
    infile.open("wordfreq.in");
    if (infile.is_open() == false) {
        cout << "Can not open the file";
//        system("pause");
        exit(1);
    }
    fstream outfile;
    outfile.open("wordFreq.out");
    if (outfile.is_open() == false) {
        cout << "Can not open the file";
//        system("pause");
        exit(1);
    }

    // declare a binary tree
    BinarySearchTree bst;
    bst.root = NULL;

    while (!infile.eof()) {
        getWord(&infile, word);
        if (bst.root == NULL) {
            bst.root = newTreeNode(newNodeData(word, 1));
            //printf("%s ok ", word);
        }

        else {
            TreeNodePtr node = findOrInsert(bst, newNodeData(word, 0));
            node->data.freq++;

        }

    }
    // the tree exists
    outfile << "\nWords      Frequency\n\n";
    inOrder(&outfile, bst.root);
    outfile << "\n\n";
    infile.close();
    outfile.close();
    cout << "Done";
//    system("pause");
} // end main

void getWord(fstream* in, char str[]) {
    // stores the next word, if any, in str[])
    //each word is converted to lowercase

    *in >> str;
    // convert the letters of str to lowercase
    int i = 0;
    while (str[i])
    {
        str[i] = tolower(str[i]);
        i++;
    }

}

TreeNodePtr findOrInsert(BinarySearchTree bt, NodeData d) {
    TreeNodePtr newTreeNode(NodeData);
    if (bt.root == NULL) return newTreeNode(d);
    TreeNodePtr curr = bt.root;
    int cmp;
    while ((cmp = strcmp(d.word, curr->data.word)) != 0) {
        if (cmp < 0) { // if left
            if (curr->left == NULL) return curr->left = newTreeNode(d);
            curr = curr->left;
        }
        else { // try right
            if (curr->right == NULL) return curr->right = newTreeNode(d);
            curr = curr->right;
        }
        // d is in th tree; return pointer to the node
    }return curr;
}

void inOrder(fstream* out, TreeNodePtr node) {
    if (node != NULL) {
        inOrder(out, node->left);
        *out << node->data.word << "--->" << node->data.freq << "\n";
        inOrder(out, node->right);
    }
}

NodeData newNodeData(char str[], int n) {
    NodeData temp;
    strcpy(temp.word, str);
    temp.freq = n;
    return temp;
}

TreeNodePtr newTreeNode(NodeData d) {
    TreeNodePtr p = new TreeNode;
    p->data = d;
    p->left = p->right = NULL;
    return p;
}
