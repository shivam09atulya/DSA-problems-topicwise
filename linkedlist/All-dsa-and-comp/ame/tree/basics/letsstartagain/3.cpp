#include "tree.h"


bool search(node *root,int val)
{
    if(root==NULL)
    return false;

    if(root->data==val)
    return true;

    bool res1=search(root->lchild,val);
    if(res1) return true;

    bool res2=search(root->rchild,val);
    return res2;
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
    cout<<search(root,99);
    cout << endl;

}

/* Here actually there are two base conditions:
    1.found
    2.not found
    and rest same thinking of recurrsion which is to find it in left subtree and if 
    not found there go for right
*/