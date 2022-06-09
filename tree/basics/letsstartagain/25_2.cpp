#include "tree.h"


node *mirror(node *root)
{

    if (!root)
        return root;

    node *temp = root->lchild;
    root->lchild = root->rchild;
    root->rchild = temp;

    mirror(root->lchild);
    mirror(root->rchild);

    return root;
}

bool mirror_check(node *root1,node *root2)
{
    if(!root1 && !root2)
    return true;

    if(!root1 || !root2)
    return false;

    if(root1->data != root2->data)
    return false;

    bool l=mirror_check(root1->lchild,root2->rchild);
    bool r=mirror_check(root1->rchild,root2->lchild);

    return (l&&r);
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

    node *root1 = new node(1);
    root1->lchild = new node(3);
    root1->rchild = new node(2);
    root1->lchild->lchild = new node(7);
    root1->lchild->rchild = new node(6);
    root1->rchild->lchild = new node(5);
    root1->rchild->rchild = new node(3);
    display1(root1);
    cout<<endl;

    cout<<mirror_check(root,root1);
    return 0;
}