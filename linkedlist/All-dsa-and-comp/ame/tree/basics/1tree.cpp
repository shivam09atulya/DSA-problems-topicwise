#include "bst.h"
#include<stack>


int findMAX(node *root)
{
    if(root==NULL){return -1;}

    stack <node *> s;
    int max;
    while(true)
    {
        if(root!=NULL)
        {
            s.push(root);
            max=root->data;
            root=root->lchild;
        }

        else 
        {
            if(s.empty()){break;}
            root=s.top();
            if(root->data>max)
            max=root->data;
            s.pop();
            root=root->rchild;
        }
    }

    return max;
}


int main()
{
    node *root=new node();
    root=NULL;
    bst b;
    root=b.insert(root,1);
    b.insert(root,2);
    b.insert(root,3);
    b.insert(root,4);
    b.insert(root,5);
    b.insert(root,5);
    b.insert(root,26);
     cout<<" max element is = "<<findMAX(root);
    return 0;
}