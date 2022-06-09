#include "tree.h"
#include<queue>
#include<stack>

// Deleting the desired node with the leaf node and not the deepest node
void del(node *root,int val)
{
    if(!root) return;

    else
    {
        stack<node *> s;
        node *temp,*leaf;
        while (1)
        {
            if(root)
            {
                s.push(root);
                if(root->data==val){
                temp=root;}

                if(!root->lchild && !root->rchild)
                {
                    leaf=root;
                }
                root=root->lchild;
            }
            else
            {
                if(s.empty()) break;

                root=s.top();
                root=root->rchild;
                s.pop();
            }
        }
        
        cout<<" "<<temp->data;
        cout<<" "<<leaf->data;
        int alt;
        alt=temp->data;
        temp->data=leaf->data;
        leaf->data=alt;
        // leaf->data=0;
        delete leaf;
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
    display1(root);cout<<endl;
    del(root,2);cout<<endl;
    display1(root);
}