#include "bst.h"
    // this is algo for max element in binary search tree and not just binary tree
int findMAX(node *root)
{
    node *p=root;
    while( p && p->rchild!= NULL)
    {
        p=p->rchild;
    }
    return p->data;
}

int main()
{
    long int n =10000;
    class node *root=new node();
    class bst b;
    root=NULL;
    root=b.insert(root,1);
    b.insert(root,2);
    b.insert(root,3);
    b.insert(root,4);
    b.insert(root,5);
    b.insert(root,6);
    b.insert(root,7);
    b.insert(root,8);
    b.insert(root,9);
    int i;
    for(i=0;i<n;i++)
    {
        b.insert(root,rand());
    }
    b.display(root);
    cout<<"max no is = "<<findMAX(root);
}