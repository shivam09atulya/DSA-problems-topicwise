#include "tree.h"
#include<queue>


int leaves(node *root)
{
    if(!root) return INT_MIN;

    else
    {
        queue <node *> q;
        int countnode,leaf;
        q.push(root);

        while(true)
        {
            countnode=q.size();

            if(countnode==0)
            return leaf;

            while(countnode>0)
            {
                root=q.front();
                cout<<" "<<root->data;
                if(root->lchild)
                q.push(root->lchild);

                if(root->rchild)
                q.push(root->rchild);

                if(!root->lchild && !root->rchild)
                leaf++;
                q.pop();
                countnode--;
            }

        }
    }
}

int main()
{node *root = new node(1);
root->lchild = new node(2);
root->rchild = new node(3);
root->lchild->lchild = new node(4);
root->lchild->rchild = new node(5);
root->rchild->lchild = new node(6);
root->rchild->rchild = new node(7);
cout<<leaves(root);
}