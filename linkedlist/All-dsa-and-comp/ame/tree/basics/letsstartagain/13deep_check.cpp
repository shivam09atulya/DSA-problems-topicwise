#include "tree.h"
#include<queue>
#include<stack>

// Check how to delete node so that it does not effect tree

void del(node *root,int val)
{
    if(!root) return ;

    else
    {
        int countnode,level=0;
        node *temp,*deep;
        int com;
        queue <pair<node *,int >> q;
        stack <pair<node *,int >>s;
        q.push({root,level});
        while (1)
        {
            countnode=q.size();
            if(countnode==0)
            break;

            level++;

            while(countnode>0)
            {
                if(root->data==val)
                temp=root;

                root=q.front().first;

                if(root->lchild)
                q.push({root->lchild,level});

                if(root->rchild)
                q.push({root->rchild,level});

                if(!root->lchild && !root->rchild)
                s.push({root,level});


                countnode--;
                q.pop();
            }
        }
        
        deep=s.top().first;

        int alt;
        alt=deep->data;
        deep->data=temp->data;
        temp->data=alt;

        free(deep);
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
    root->rchild->rchild->lchild = new node(8);
    display1(root);
    cout << endl;
    del(root,2);
    display1(root);

    return 0;
}