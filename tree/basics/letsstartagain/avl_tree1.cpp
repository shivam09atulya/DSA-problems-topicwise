#include<iostream>
#include<stdlib.h>
#include<queue>

using namespace std;

class node{
    public:
    int data;
    int height;
    node *left;
    node *right;
   

    node()
    {
        data=0;
        height=1;
        left=right=NULL;
    }

    node(int val)
    {
        data=val;
        height=1;
        left=right=NULL;

    }
};

int height(node *n)
{
    if(n==NULL)
    return 0;

    return n->height;
}

int max(int a,int b)
{
    return (a>b)?a:b;
}

node* rightRotate(node *y)
{
    node *x = y->left;
    node *T2 = x->right;

    x->right = y;
    y->left = T2;

    y->height=max(height(y->left),height(y->right))+1;
    x->height=max(height(x->left),height(x->right))+1;


    return x;
}

node* leftRotate(node *x)
{
    node *y=x->right;
    node *t2=y->left;

    y->left = x;
    x->right = t2;

    x->height=max(height(x->left),height(x->right))+1;
    y->height=max(height(y->left),height(y->right))+1;

    return y;
}

int getBalance(node *n)
{
    if(!n)
    return 0;

    return height(n->left)-height(n->right);
}


node *insert(node *root,int val)
{
    if(!root)
    return new node(val);

    if(val>root->data)
    root->right=insert(root->right,val);

    else if(val<root->data)
    root->left=insert(root->left,val);

    else
    return root;

    root->height=max(height(root->left),height(root->right))+1;

    int balance=getBalance(root);

    // LL rotate

    if(balance  > 1 && val < root->left->data)
    return rightRotate(root);

    // RR rotate

    if(balance < -1 && val > root->right->data)
    return leftRotate(root);

    // LR rotate

    if(balance > 1 && val > root->left->data)
    {
        root->left=leftRotate(root->left);
        return rightRotate(root);
    }

    // RL rotate

    if(balance < -1 && val < root->right->data)
    {
        root->right=rightRotate(root->right);
        return leftRotate(root);
    }

    return root;
}

void display(node *root)
{
    if (root)
    {
        display(root->left);
        cout << " " << root->data;
        display(root->right);
    }
}

void display1(node *root)
{
    if (!root)
        return;

    else
    {
        queue<node *> q;
        int countnode;
        q.push(root);

        while (1)
        {
            countnode = q.size();

            if (countnode == 0)
                break;

            while (countnode > 0)
            {
                root = q.front();
                cout << " " << root->data;
                if (root->left)
                    q.push(root->left);

                if (root->right)
                    q.push(root->right);

                q.pop();
                countnode--;
            }
            cout << endl;
        }
    }
}

int main()
{

    node *root=new node(10);

    root = insert(root, 10);
    root = insert(root, 20);
    root = insert(root, 30);
    root = insert(root, 40);
    root = insert(root, 50);
    root = insert(root, 25);
    for(int i=0;i<1000lj0;i++)
    root=insert(root,rand()/100);
    display1(root);
    cout<<endl;
    display(root);
    return 0;
}