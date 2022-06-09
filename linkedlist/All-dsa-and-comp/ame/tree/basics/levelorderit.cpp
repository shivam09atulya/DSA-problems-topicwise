#include "bst.h"
#include<queue>

// void display(node *root)
// {
//     if(root==NULL){return;}

//     else{
//         queue <node *> q;
//         do
//         {
//             if(root!=NULL)
//             {
//                 q.push(root);
//                 root=root->lchild;
//             }
//             else
//             {
//                 root=q.front();
//                 cout<<" "<<root->data;
//                 q.pop();
//                 root=root->rchild;

//             }
//         }while(!q.empty());
//     }
// }

    void display(node *root)
    {
        if(!root){return ;}

        else{
            queue <node *> q;
            q.push(root);
            while (!q.empty())
            {
                root=q.front();
                q.pop();
                cout<<" "<<root->data;
                if (root->lchild)
                    q.push(root->lchild);

                if (root->rchild)
                    q.push(root->rchild);

            }
        }
    }
int main()
{
    node *root=new node(1);
    root->lchild=new node(2);
    root->rchild=new node(5);
    root->lchild->lchild=new node(3);
    root->lchild->rchild=new node(4);
    root->rchild->lchild=new node(6);
    root->rchild->rchild=new node(7);
    cout<<endl;
    display(root);
}