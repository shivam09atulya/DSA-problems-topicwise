#include "tree_char.h"
#include<queue>

// Done for inlevel traversal
node *buildTree(char pre[])
{
    if(pre==NULL) return NULL;

    else
    {
        queue <node *> q;
        int countnode=0,i=0;

        node *root=new node(pre[i++]);
        node *head=root;
        q.push(root);

        while(pre[i]!='\0')
        {
            countnode=q.size();

            if(countnode==0)
            return head;

            while(countnode>0)
            {
                root=q.front();

                if(root->data=='I')
                {
                    if(!root->lchild)
                   { root->lchild=new node(pre[i++]);
                   q.push(root->lchild);}

                    if(!root->rchild){
                    root->rchild=new node(pre[i++]);
                    q.push(root->rchild);}
                }

                // else if(root->data=='L')
                // i++;

                countnode--;
                q.pop();
            }
        }
        return head;
    }
}

int main()
{   char pre[]={'I', 'I', 'I', 'L', 'L','L','L'};
    node *root=buildTree(pre);
    display1(root);
    return 0;
}