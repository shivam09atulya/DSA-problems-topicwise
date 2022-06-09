#include <iostream>
#include<stack>
#include<queue>

using namespace std;

class node{
    public:
    node *left;
    int data;
    node *right;

    node();
    node(int val);
};

node::node():data(0),left(NULL),right(NULL){}

node::node(int val){
    data=val;
    left=right=NULL;
}

class bst{
    public:
    node* insert(node *root,int val);
};

node *bst::insert(node *root,int val)
{
    if(!root) return new node(val);

    if(root->data>val)
    root->left=insert(root->left,val);

    if(root->data<val)
    root->right=insert(root->right,val);

    return root;
}

void display(node *root)
{
    if(root)
    {display(root->left);
    cout<<" "<<root->data;
    display(root->right);}
}

void display1(node *root)
{
    if(!root) return;

    else
    {
        queue <node *> q;
        int countnode;
        q.push(root);

        while(1)
        {
            countnode=q.size();
           
            if(countnode==0)
            break;

            while(countnode>0)
            {
                root=q.front();
                cout<<" "<<root->data;

                if(root->left)
                q.push(root->left);
            
              

                if(root->right)
                q.push(root->right);
                
                
                q.pop();
                countnode--;
            }
            cout<<endl;
        }
    }
}

// int main()
// {
//     node *root=new node(4);
//     bst b;
//     b.insert(root,5);
//     b.insert(root,1);
//     b.insert(root,2);
//     b.insert(root,3);
//     display1(root);
//     return 0;
// }