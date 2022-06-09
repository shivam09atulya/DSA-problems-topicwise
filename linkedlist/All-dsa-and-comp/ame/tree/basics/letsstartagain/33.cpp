#include "tree_char.h"
#include <stack>

node *buildTree(char pre[])
{
    if(!pre) return NULL;

    static int i=0;

    node *root=new node(pre[i++]);

    if(root->data=='I'){
        root->lchild=buildTree(pre);
        root->rchild=buildTree(pre);
    }

    return root;
}

int main()
{
    char pre[] = {'I', 'L', 'I', 'L', 'I','L','L'};
    node *root = new node(1);
    root->lchild = new node(2);
    root->rchild = new node(3);
    root->lchild->lchild = new node(4);
    root->lchild->rchild = new node(5);
    root->rchild->lchild = new node(6);
    root->rchild->rchild = new node(7);
    root=buildTree(pre);
    display1(root);
    return 0;
}