#include "tree.h"
#include<stack>

int search(node *root,int val)
{
    if(!root) return INT_MIN;

    else{
        stack <node *> s;

        while (true)
        {
            if(root!=NULL)
            {
                s.push(root);
                root=root->lchild;
            }
            else
            {
                if(s.empty())break;
                root=s.top();
                if(root->data==val)
                return 1;
                root=root->rchild;
                s.pop();
            }
        }
        
        return 0;
    }
}


int main()
{
    node *root = new node(1);
    root->lchild = new node(2);
    root->rchild = new node(3);
    root->lchild->lchild = new node(4);
    root->lchild->rchild = new node(5);
    root->rchild->lchild = new node(6);
    root->rchild->rchild = new node(7);
    display(root);
    cout << endl;
    cout<<search(root,42);
}