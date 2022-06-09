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

void tree_del(node *root)
{
    if(!root)
    {
        tree_del(root->lchild);
        tree_del(root->rchild);
        cout<<" "<<root->data;
    }
}

int main()
{
    node *root = new node(1);
    root->lchild = new node(2);
    root->rchild = new node(3);
    root->lchild->lchild = new node(4);
    root->lchild->rchild = new node(5);
    display(root);
    tree_del(root);
    return 0;
}