#include "bst.h"

node * LCA(node *root,node *alpha,node *beta)
{
    if(!root) return NULL;

    if(alpha->data<root->data && root->data<beta->data)
    return root;

    if(root->data < alpha->data && root->data < beta->data)
    root=root->left;
    else
    root=root->right;
    
}

int main()
{
    node *root = new node(4);
    root->left = new node(2);
    root->right = new node(8);
    node *alpha = root->right->left = new node(5);
    node *beta = root->right->right = new node(1);
    root->right->left->right = new node(7);
    root->right->left->right->left = new node(6);
    display1(root);
    cout << endl;
    cout << LCA(root, alpha, beta)->data;
    return 0;
}
/*
Go to Tushars video youtube

    4
   / \
  2   8
    /   \
    5   1
    \
    7
    /6
    
*/ 