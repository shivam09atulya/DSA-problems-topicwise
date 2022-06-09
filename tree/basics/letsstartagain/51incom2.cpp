#include "tree.h"

/*
This type of recursion can be there though not right but possibility is.  In this we give conditions once and for all
*/

// this type of recursion is wrong where left->data<root->data<root->right->Data  refer book and gfg

bool isbst(node *root)
{

    if (!root)
        return false;

    if (isbst(root->lchild) && isbst(root->rchild) && (root->lchild->data < root->data < root->rchild->data))
    return true;

    return false;
}


int main()
{
    node *root = new node(4);
    root->lchild = new node(2);
    root->rchild = new node(5);
    root->lchild->lchild = new node(1);
    root->lchild->rchild = new node(3);
    display1(root);
    cout << endl;
    cout << isbst(root);
    return 0;
}