#include "bst.h"

int size(node *root)
{
    if(root==NULL)
    return 0;

    else
    return(size(root->rchild)+1+size(root->lchild));
}

int main()
{
    node *root=new node(20);
    bst b;
    b.insert(root,30);
    b.insert(root,60);
    b.insert(root,70);
    b.insert(root,10);
    b.display(root);
    cout<<endl;
    cout<<" "<<size(root);
}