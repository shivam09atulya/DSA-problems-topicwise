#include<iostream>

using namespace std;

struct node
{
    int data;
    node *left;
    node *right;

    node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }
};

int main()
{
    struct node  *root=new node(1);
    root->right=new node(1);
    root->left=new node(1);
    return 0;
}