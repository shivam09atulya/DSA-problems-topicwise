#include "tree.h"

class avl{
    public:
    node *root;
};

int nodeHeight(node *root)
{
    if(!root)
    return 0;

    int l=nodeHeight(root->lchild);
    int r=nodeHeight(root->rchild);

    return l>r?l+1:r+1;
}

int main()
{
    avl *a=new avl();
    a->root=new node(10);
    a->root->lchild = new node(2);
   a->root->rchild = new node(5);
   a->root->lchild->lchild = new node(1);
   a->root->lchild->rchild = new node(3);
    display1(a->root);
    cout << endl;
    cout<<"\n"<<nodeHeight(a->root);
    cout<<"\n"<<nodeHeight(a->root->lchild);
    cout<<"\n"<<nodeHeight(a->root->rchild);
    cout<<"\n"<<nodeHeight(a->root->lchild->rchild);
    cout<<"\n"<<nodeHeight(a->root->lchild->lchild);
    return 0;
}