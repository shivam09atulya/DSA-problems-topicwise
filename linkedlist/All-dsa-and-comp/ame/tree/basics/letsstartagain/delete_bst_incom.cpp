#include "bst.h"

node *findMAX(node *root)
{
    if(!root) return NULL;

    if(!root->right)
    return root;

    return findMAX(root->right);

}

node *del(node *root,int val)
{
    if(!root){
        cout<<"Element Not Present!!!";
    return NULL;
    }
    if(val>root->data)
    root->right=del(root->right,val);

    if(val<root->data)
    root->left=del(root->left,val);

    else
    {
        
        if(root->left && root->right)
        {
            node *temp=findMAX(root->left);
            root->data=temp->data;
            root->left=del(root->left,root->data);
        }

        else
        {
            node *temp=root;

            if(!root->left)
            root=root->right;

            if(!root->right)
            root=root->left;

            temp=NULL;
        }
    }
    return root;
    
}
int main()
{
    node *root=new node(4);
    bst b;
    b.insert(root,2);
    b.insert(root,8);
    b.insert(root,5);
    b.insert(root,1);
    b.insert(root,7);
    b.insert(root,6);
    b.insert(root,9);
    display(root);cout<<endl;
    root=del(root,5);
    // node *temp=findMAX(root);
    // cout<<" "<<temp->data;
     display(root);
    return 0;
}