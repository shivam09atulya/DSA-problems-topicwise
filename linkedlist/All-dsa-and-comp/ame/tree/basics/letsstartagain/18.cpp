#include "tree.h"
#include<queue>

int dia(node *root)
{
    if(!root) return INT_MIN;

    else
    {
        queue <node *>q;
        int countnode,dia=0;
        q.push(root);

        while(1)
        {
            countnode=q.size();

            if(countnode==0)
            return dia+1;

            if(dia<countnode)
            dia=countnode;

            while(countnode>0)
            {
                root=q.front();

                if(root->lchild)
                q.push(root->lchild);

                if (root->rchild)
                    q.push(root->rchild);

                q.pop();
                countnode--;
            }
        }
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
    cout<<dia(root);
    return 0;
}