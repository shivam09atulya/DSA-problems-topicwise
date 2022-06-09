#include "bst.h"

node *LCA(node *root,node *alpha,node *beta)
{
    if(!root) return NULL;

    if(root->data==alpha->data || root->data==beta->data)
    return root;

    if(LCA(root->left,alpha,beta) && LCA(root->right,alpha,beta))
    {
      return root;
    }

    if (!LCA(root->left, alpha, beta) && !LCA(root->right, alpha, beta))     //can skip this step because the first statement does the same thing
    {
        return NULL;
    }

    else
        return LCA(root->left, alpha, beta) ? LCA(root->left, alpha, beta) : LCA(root->right, alpha, beta);  //Important step bcoz of this there is further returning (eg.  if one side is NULL and other not NULL this condition is not meeting or address) and for a recursive function we should check every possibility
}

int main()
{
    // node *root=new node(4);
    // bst b;
    // node *alpha,*beta;
    // b.insert(root,2);
    // b.insert(root,8);
    // alpha=b.insert(root,5);
    // b.insert(root,1);
    // beta = b.insert(root, 7);
    // b.insert(root,6);
    // display1(root);cout<<endl;
    // cout<<LCA(root,alpha,beta)->data; 

    node *root=new node(4);
    root->left=new node(2);
    root->right=new node(8);
    node *alpha=root->right->left=new node(5);
    node *beta=root->right->right=new node(1);
    root->right->left->right=new node(7);
    root->right->left->right->left=new node(6);
    display1(root);cout<<endl;
    cout<<LCA(root,alpha,beta)->data;
    return 0;
}