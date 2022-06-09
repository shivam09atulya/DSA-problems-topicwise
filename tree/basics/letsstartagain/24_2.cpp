#include "tree.h"

node * mirror(node *root)
{
    if(!root)
    return NULL;

    node *change=root->lchild;
    root->lchild=root->rchild;
    root->rchild=change;
    
    root->lchild=mirror(root->lchild);
    root->rchild=mirror(root->rchild);
    return root;
}

int main()
{
    node *root = new node(1);
    root->lchild = new node(2);
    root->rchild = new node(3);
    root->lchild->lchild = new node(4);
    root->lchild->rchild = new node(5);
    root->rchild->lchild = new node(6);
    root->rchild->rchild = new node(7);
    display1(root);
    cout << endl;
    root=mirror(root);
    display1(root);
    cout<<endl;
    return 0;
}