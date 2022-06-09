#include "bst.h"


/*
    Partially incomplete 
        Try making a path which starts from alpha to LCA finishing in beta

*/ 
void root_to_leaf(node *root,node *alpha,vector <int > v)
{

    if(!root) return;

    static int length;
    length++;
    v.push_back(root->data);

    if(alpha->data>root->data){
    root_to_leaf(root->right,alpha,v);
    
    }

    else if(alpha->data<root->data)
    {
        root_to_leaf(root->left,alpha,v);    
    }

    else 
    {
     
        for(int i=0;i<length;i++)
        cout<<" "<<v[i];cout<<endl;
        length=0;
        return;
    }
}

// void thepath(node *root,node *alpha,node *beta)
// {
//     if(!root) return NULL;


// }
int main()
{
    node *root = new node(4);
    root->left = new node(2);
    root->right = new node(5);
   node *beta= root->left->left = new node(1);
    node * alpha=root->left->right = new node(3);
    display1(root);
    cout << endl;

    vector <int > v;
    root_to_leaf(root,alpha,v);
    root_to_leaf(root,beta,v);
    return 0;
}