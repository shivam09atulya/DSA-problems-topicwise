#include "tree.h"

int mirror_check(node *root1,node *root2)
{
    if(!root1 && !root2)
    return 1;

    if(!root1 || !root2)
    return 0;

    if(root1->data!=root2->data)
    return 0;

    int l=mirror_check(root1->lchild,root2->lchild);   
    int r=mirror_check(root1->rchild,root2->rchild); 

    return (l==r);  
}


int main()
{
    node *root1 = new node(1);
    node *root2=new node(1);
    root1->lchild = new node(2);
    root1->rchild = new node(3);
    root1->lchild->lchild = new node(4);
    root1->lchild->rchild = new node(5);
    root1->rchild->lchild = new node(6);
    // root1->rchild->rchild = new node(7);

    root2->lchild = new node(2);
    root2->rchild = new node(3);
    root2->lchild->lchild = new node(4);
    root2->lchild->rchild = new node(5);
    root2->rchild->lchild = new node(6);
    // root2->rchild->rchild = new node(7);
    display1(root1);
    display1(root2);
    cout << endl;
    cout<<mirror_check(root1,root2);
    return 0;
}