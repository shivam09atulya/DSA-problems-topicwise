#include "bst.h"
#include<stack>

void search(node *root,int val)
{
    if(root==NULL){return;}

    stack <node*> s;

    while(true)
    {
        if(root!=NULL)
        {
            s.push(root);
            root=root->lchild;
        }

        else{
            if(s.empty()){break;}
            root=s.top();
            if(root->data==val)
            {
                cout<<" Number exists";
                return;
            }
            s.pop();
            root=root->rchild;
        }
    }
    cout<<"Does not exists";
}


int main()
{
    node *root=new node(50);
    bst b;
    b.insert(root,40);
    b.insert(root,30);
    b.insert(root,10);
    b.insert(root,110);
    b.display(root);
    search(root,130);
    return 0;
}