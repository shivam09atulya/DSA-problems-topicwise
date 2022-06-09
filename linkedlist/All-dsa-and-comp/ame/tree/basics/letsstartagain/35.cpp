#include "tree_sib.h"

void nextFill(node *root)
{
    if(!root) return;

    if(root->left)
    root->left->nextSib=root->right;

    if(root->right)
    root->right->nextSib=(root->nextSib)?root->nextSib->left:NULL;

    nextFill(root->left);
    nextFill(root->left);


}

int main()
{
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    nextFill(root);
    display1(root);

    cout << root->left->nextSib->data << endl;//2

    cout << root->left->left->nextSib->data << endl; //4
    cout << root->left->right->nextSib->data << endl; //5
    cout << endl;
    return 0;
}