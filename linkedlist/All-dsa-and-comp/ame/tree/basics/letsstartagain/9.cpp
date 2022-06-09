#include "tree.h"


void del_tree(node *root)
{
    if(root==NULL)
    return;

    del_tree(root->lchild);
    del_tree(root->rchild);
    free(root);
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
    del_tree(root);
    display(root);
    return 0;
}