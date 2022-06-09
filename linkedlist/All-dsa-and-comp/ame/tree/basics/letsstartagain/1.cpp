#include "tree.h"

void display(node *root)
{
    if(root)
    {
        display(root->lchild);
        cout<<" "<<root->data;
        display(root->rchild);
    }
}

int findMAX(node *root)
{
    int left,right,root_val,max=INT_MIN;

if(root)
     {
         root_val=root->data;
    left=findMAX(root->lchild);
     right=findMAX(root->rchild);

   
    if(left>right)
    max=left;
    else
    max=right;
    if(root_val>max)
    max=root_val;
    }
    
    return max;
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
    display(root);cout<<endl;
    cout<<findMAX(root);
}

/*
    Here there is a base condition but its implementation is different 
    We can actully decide the limit , and if something exceeds it then comman
    return statement
*/