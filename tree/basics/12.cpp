#include <iostream>
#include <stack>

using namespace std;

class node
{
public:
    node *lchild;
    int data;
    node *rchild;

    node(int val)
    {
        data = val;
        lchild = rchild = NULL;
    }
};

void display(node *root)
{
    if (!root)
        return;

    else
    {
        stack<node *> s;
        while (true)
        {
            if (root != NULL)
            {
                s.push(root);
                root = root->lchild;
            }
            else
            {
                if (s.empty())
                {
                    break;
                }
                root = s.top();
                cout << " " << root->data;
                root = root->rchild;
                s.pop();
            }
        }
    }
}

int height(node *root)
{
    if(root==NULL)
    return 0;

    int left=height(root->lchild);
    int right=height(root->rchild);

    return (1+max(left,right));
}

int end(node* root)
{
    if(root->lchild==NULL)
    return root->lchild->data;

    if(root->rchild==NULL)
    return root->rchild->data;

    return end(root->rchild);
}

int deep(node *root)
{

    int left=height(root->lchild);
    int right=height(root->rchild);

    if(right>left)
    return end(root->rchild);

    if(left>right)
    return end(root->lchild);

}

int main()
{
    node *root = new node(1);
    root->lchild = new node(2);
    root->rchild = new node(3);\








































































































































































































































































































































































































































































































     
    root->lchild->lchild = new node(4);
    root->lchild->rchild = new node(5);
    display(root);cout<<endl;
    cout<<deep(root);
    return 0;
}