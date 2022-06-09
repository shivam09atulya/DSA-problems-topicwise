#include "tree.h"
#include<queue>
#include<stack>

void inrev(node *root)
{
    if(!root) return;

    else
    {
        queue <node *> q;
        stack <node *> s;
        q.push(root);
        s.push(root);
        int countnode;
        while(true)
        {   
            countnode=q.size();
            if(countnode==0)
            break;

            while(countnode>0)
            {
                root=q.front();
                q.pop();
                if(root->rchild)
                   { q.push(root->rchild);
                    s.push(root->rchild);}

                if(root->lchild){
                    q.push(root->lchild);
                    s.push(root->lchild);}
                countnode--;
            }
        }

        while (!s.empty())
        {
            cout <<s.top()->data<<" ";
            s.pop();
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
    inrev(root);
    return 0;
}


// Stack returns everything just the revesre we put it 
//     JUST REVERSE and vice versa with queue 
//     It returns the opposite
 