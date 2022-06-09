#include "tree.h"

node *LCA(node *root,node *n1,node *n2)
{

    if(!root) return NULL;

    if(root==n1 || root==n2)
    return root;

    if(LCA(root->lchild,n1,n2) && LCA(root->rchild,n1,n2))
    {
        cout<<" "<<root->data;
        return root;
    }

    return root;
}


int main()
{
    node *n1, *n2;
    node *root = new node(1);
    root->lchild = new node(2);
    root->rchild = new node(3);
    root->lchild->lchild = new node(4);
    root->lchild->rchild = new node(5);
    n2 = root->rchild->lchild = new node(6);
    n1 = root->rchild->rchild = new node(7);
    display1(root);
    cout << endl;
    node *dis = LCA(root, n1, n2);
    cout << " " << dis->data;
    return 0;
}