#include "library.h"
#include <iostream>
using namespace std;

library::library() {
    root=NULL;
}

BookNode* library:: insert(BookNode*root, int value ){

    if(root == NULL)
    {
        root = new BookNode;
        root->id = value;
        root->left = root->right = NULL;
    }
    else if(value< root->id)
        root->left = insert(root->left,value);
    else if(value > root->id)
        root->right = insert(root->right,value);
    return root;
}
void library::insert(int data) {
    root= insert(root,data);
}
void library::clear() {
    clear(root);
    root=NULL;
}

void library::clear(BookNode*node) {
    if (node == NULL) return;

    clear(node->left);
    clear(node->right);

    delete node;
}

int library::subtreeRootIDSearch(BookNode *root, int id1, int id2) {
    if (root == NULL) return 0;

    if (root->id > id1 && root->id > id2)
        return subtreeRootIDSearch(root->left, id1, id2);

    if (root->id < id1 && root->id < id2)
        return subtreeRootIDSearch(root->right, id1, id2);

    return root->id;
}
void library::subtreeRootIDSearch(int id1, int id2) {
    cout<<subtreeRootIDSearch(root,id1,id2)<<endl;
}
