#include "tree.h"
#include <queue>

node *insert(node *root,int val)
{
    if(!root) return new node(val);

    else
    {
        queue <node *> q;
        node *temp=root;
        int countnode=0;
        q.push(root);
        while(1)
        {
            countnode=q.size();
            if(countnode==0)
            return root;

            while(countnode>0)
            {
                temp=q.front();

                if(temp->lchild)
                q.push(temp->lchild);
                
                if(temp->rchild)
                q.push(temp->rchild);

                if(!temp->lchild)
               { temp->lchild=new node(val);
               return root;
               }

                if(!temp->rchild)
               { temp->rchild=new node(val);
               return root;
               }
                q.pop();
                countnode--;
            }
        }
    }
}

    // void display1(node *root)
    // {
    //     if(root)
    //     {
    //         display1(root->lchild);
    //         cout<<" "<<root->data;
    //         display1(root->rchild);
    //     }
    // }

int main()
{
    node *root=new node(3);
    root=insert(root,4);
    root=insert(root,5);
    root=insert(root,6);
    root=insert(root,7);
    root=insert(root,8);
    display1(root);

    return 0;
}