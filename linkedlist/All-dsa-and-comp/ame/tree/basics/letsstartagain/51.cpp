#include "tree.h"


node *max_bst(node *root)
{
    if(!root) return NULL;

    if(!root->rchild)
    return root;

    return max_bst(root->rchild);
}

node *min_bst(node *root)
{
    if (!root)
        return NULL;

    if (!root->lchild)
        return root;

    return min_bst(root->lchild);
}

bool isbst(node *root)
{
    if(!root) return false;

    if(root->lchild && root->rchild && max_bst(root->lchild)->data < root->data && min_bst(root->rchild)->data > root->data)
    return true;

    if(isbst(root->lchild) && isbst(root->rchild))
    return true;

    return false;
}

int main()
{
    node *root = new node(4);
    root->lchild=new node(2);
    root->rchild=new node(5);
    root->lchild->lchild=new node(1);
    root->lchild->rchild=new node(3);
    display1(root);
    cout << endl;
    cout<<isbst(root);
    return 0;
}

/*
in this it finds the left tree largest number compares it with root and same for right tree simultaneously then simple recursive call

*/ 