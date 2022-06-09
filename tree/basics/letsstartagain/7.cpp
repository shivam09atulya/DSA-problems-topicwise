#include "tree.h"
#include <queue>

int height(node *root)
{
   if(root==NULL)
   return INT_MIN;

   else
   {
       queue <node *> q;
       
       q.push(root);
       int height = 0;
       int nodecount;
       while(true)
       {
           nodecount = q.size();
           if (nodecount == 0)
               return height;

           height++;
          
           while(nodecount>0)
           {
                root=q.front();
                q.pop(); 
                if(root->lchild!=NULL)
                    q.push(root->lchild);
                if(root->rchild!=NULL)
                    q.push(root->rchild);
                    nodecount--;
           }
       }
       return height;
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
    root->lchild->lchild->lchild = new node(7);
    // root->rchild->rchild = new node(7);
    // root->rchild->rchild = new node(7);
    // root->rchild->rchild = new node(7);
   cout<< height(root);
    cout << endl;
 
}
/*
    Queue only holds elements which are children and no time parent and children are there at a time 
    this is actually heigth which in real life can be compared to generations

*/