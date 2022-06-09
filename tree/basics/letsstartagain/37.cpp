#include "generic.h"
#include<queue>




int sum(node *root)
{
    if(!root)
    return 0;

    return (root->data+sum(root->nextsib)+sum(root->first));
}

int main()
{
    node *root=new node(1);
    root->first=new node(2);
    root->first->nextsib=new node(3);
    root->first->nextsib->nextsib=new node(4);
    root->first->nextsib->nextsib->nextsib=new node(5);
    root->first->nextsib->nextsib->nextsib->nextsib=new node(6);
    root->first->first=new node(5);
    display1(root);
    cout<<sum(root);
    return 0;
}