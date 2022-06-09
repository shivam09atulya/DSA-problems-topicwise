#include<iostream>

    using namespace std;

        class node{
        public:
        int data;
        node *left;
        node *right;

        node ()
        {
            data=0;
            right=left=NULL;
        }

        node (int val)
        {
            data=val;
            right=left=NULL;
        }
        };

    void display(node *root)
    {
        if(!root)
        {
            display(root->right);
            cout<<" "<<root->data;
            display(root->left);
        }
    }
    
    int main()
    {
        node *root;
        root->data=1;
        root->left=new node(2);
        root->right=new node(2);
        root->left->left=new node(3);
        display(root);
        return 0;
    }