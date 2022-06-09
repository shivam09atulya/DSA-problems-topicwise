#include<iostream>
#include<time.h>

using namespace std;

class node{
    public:
    int data;
    node *left;
    node *rigth;

    node ()
    {
        data=0;
        left=rigth=NULL;=
    }

    node (int val
    {
        data=val;
        left=rigth=NULL;
    }
};

void display(node *root)
{

    if(root)
    {
        display(root->left);
        cout<<root->data<<" ";
        display(root->rigth);
    }
}


int main()
{
    class node *root=new node(5);
    root->left=new node(6);
    root->rigth=new node(7);
    root->left->left=new node(1);
    root->left->rigth=new node(2);
    root->rigth->left=new node(3);
    root->rigth->rigth=new node(4);
    display(root);

    return 0;
}