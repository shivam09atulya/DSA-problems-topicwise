#include "tree.h"
#include <queue>
#include<stack>
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
                if (root->lchild)
                    q.push(root->lchild);

                if (root->rchild)
                    q.push(root->rchild);

                q.pop();
                countnode--;
            }
            cout << endl;
        }
    }
}

node *mirror(node *root)
{
    if(root==NULL)
    return NULL;

    if(!root->lchild && !root->rchild)
    return root;

    mirror(root->lchild);
    mirror(root->rchild);
    int temp=root->lchild->data;
    root->lchild->data=root->rchild->data;
    root->rchild->data=temp;

    return root;
}

int main()
{
    node *root = new node(1);
    node *root2;
    root->lchild = new node(2);
    root->rchild = new node(3);
    root->lchild->lchild = new node(4);
    root->lchild->rchild = new node(5);
    root->rchild->lchild = new node(6);
    root->rchild->rchild = new node(7);
    display1(root);
    cout << endl;
   root=mirror(root);
   display1(root);
    return 0;
}