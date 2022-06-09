#include "bst.h"
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
    node *root=new node(6);
    bst b;
    b.insert(root,1);
    b.insert(root,7);
    b.insert(root,8);
    b.insert(root,9);
    b.insert(root,0);
    b.insert(root,2);
    b.insert(root,3);
    b.insert(root,4);
    b.insert(root,5);
    b.display(root);
    cout<<" The height of tree is "<<height(root);
}