#include "tree.h"
#include <queue>
#include<stack>

node *mirror(node *root)
{
    if(root==NULL)
    return NULL;

    if(!root->lchild && !root->rchild)
    return root;

    mirror(root->lchild);
    mirror(root->rchild);
    int temp=root->lchild->data;
    root->lchild->data=root->rchild->data;
    root->rchild->data=temp;

    return root;
}

int main()
{
    node *root = new node(1);
    node *root2;
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
    return 0;
}

/*
    This is wrong bcoz right mirror image is 
    1
   / \
   2  3
   /\  /\ 
   7 6 5  4
    

*/ 