#include "bst.h"

int isbst(node *root,int min,int max)
{
    if(!root)
    return 1;

    if(root->data>max || root->data<min)
    return 0;

    return(isbst(root->left,min,root->d))
}

int main()
{
    node *root = new node(4);
    root->left = new node(2);
    root->right = new node(5);
    root->left->left = new node(1);
    root->left->right = new node(3);
    display1(root);
    display(root);cout<<endl;
    cout<<isbst(root,INT_MIN,INT_MAX);
    return 0;
}