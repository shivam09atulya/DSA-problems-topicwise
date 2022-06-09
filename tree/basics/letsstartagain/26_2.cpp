#include "tree.h"

node *LCA(node *root,node *node1,node *node2)
{
    if(!root)
    return NULL;

    if(node1==node2)
    return node1;

    if(root==node1 || root==node2)
    return root;

    if (LCA(root->lchild, node1, node2) && LCA(root->rchild, node1, node2))
        {
            cout<<root->data<<" ";
            exit(0);
        }

    if(LCA(root->lchild,node1,node2) || LCA(root->rchild,node1,node2))
    return root;
    
    if (LCA(root->lchild, node1, node2) && LCA(root->rchild, node1, node2))
        return root;

    return NULL;

}

int main()
{
    node *root = new node(1);
    node *node1,*node2;
    root->lchild = new node(2);
  root->rchild = new node(3);
  root->lchild->lchild = new node(4);
  root->lchild->rchild = new node(5);
  root->rchild->lchild = new node(6);
  root->rchild->rchild = new node(7);
  node1 = root->lchild->lchild->lchild = new node(8);
 node2= root->lchild->lchild->rchild = new node(9);
  display1(root);
  cout << endl;
  cout << LCA(root, node1, node2)->data;
  return 0;
}

/*
Time 9.8.21   20min 41sec
*/ 