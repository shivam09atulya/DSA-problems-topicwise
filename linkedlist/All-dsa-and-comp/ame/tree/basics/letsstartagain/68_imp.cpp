#include "bst.h"
#include<queue>

int samebst(node *root1,node *root2)
{
    if(!root1 && !root2) return 1;

    if(!root1 || !root2) return 0;
    
    if(!root1->left && !root2->left)
    return 1;

    if(!root1->right && !root2->right)
    return 1;

    if(!root1->left || !root2->left)
    return 0;

    if(!root1->right || !root2->right)
    return 0;

    if(root1->data!=root2->data || root1->left->data!=root2->left->data || root1->right->data!=root2->right->data)
    return 0;

    return (samebst(root1->left,root2->left) && samebst(root1->right,root2->right));
}

int main()
{
    node *root1=new node(10);
    bst b1;
    b1.insert(root1,5);
    b1.insert(root1,20);
    b1.insert(root1,15);
    b1.insert(root1,30);
    node *root2=new node(10);
    bst b2;
    b2.insert(root2,20);
    b2.insert(root2,15);
    b2.insert(root2,30);
    b2.insert(root2,5);
    display1(root1);
    display1(root2);
    cout<<samebst(root1,root2);
    return 0;
}