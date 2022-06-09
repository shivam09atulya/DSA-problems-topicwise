#include<iostream>
#include<queue>

using namespace std;

class node{
public:
    node *lchild;
    int data;
    node *rchild;
    
    node(int val)
    {
        data=val;
        lchild=rchild=NULL;
    }
};

void display(node *root)
{
    node *p=root;
    
    if(p)
    {
        display(root->lchild);
        cout<<root->data<<" ";
        display(root->rchild);
    }
}

int main()
{
    node *root=new node(10);
    root->lchild=new node(20);
    root->rchild=new node(20);
    display(root);
    return 0;
}