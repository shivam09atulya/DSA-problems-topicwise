#include "tree.h"
#include<stack>

int height(node *root)
{
    if(root==NULL)
    return 0;
    int left=height(root->lchild);
    int right=height(root->rchild);
    return (1+max(left,right));
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
    display(root);
    cout << endl;
    cout<<height(root);
}