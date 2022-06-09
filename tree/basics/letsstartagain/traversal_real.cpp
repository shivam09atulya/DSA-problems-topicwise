#include "tree.h"

void display2(node *root)
{
    if(root)
    {
        display2(root->lchild);
        display2(root->rchild);
        cout<<" "<<root->data;
    }
}

void display3(node *root)
{

    if(root)
    {
        cout<<" "<<root->data;
        display3(root->lchild);
        display3(root->rchild);
    }
}

int main()
{   
    node *root=new node(1);
    root->lchild=new node(2);
    root->rchild=new node(3);
    root->lchild->lchild=new node(4);
    root->lchild->rchild=new node(5);  
    root->rchild->lchild=new node(6);  
    root->rchild->rchild=new node(7);  
    root->lchild->lchild->lchild=new node(8);
    root->lchild->lchild->rchild=new node(9);
    root->rchild->lchild->lchild=new node(10);  
    root->rchild->lchild->rchild=new node(11);  
    root->rchild->rchild->lchild=new node(12);  
    root->rchild->rchild->lchild->rchild=new node(13);  
    root->rchild->rchild->lchild->rchild->lchild=new node(14);    
    root->rchild->rchild->lchild->rchild->rchild=new node(15);

    cout<<"\nInorder Traversal"<<endl;
    display(root);

    cout<<"\nLevelorder Traversal"<<endl;
    display1(root);

    cout<<"\nPostorder Traversal"<<endl;
    display2(root);

    cout<<"\nPreorder Traversal"<<endl;
    display3(root);

    return 0;
}