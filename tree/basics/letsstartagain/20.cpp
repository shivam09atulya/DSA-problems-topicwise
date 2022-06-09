#include "tree.h"
#define len 1000

int arr[len];


void printall(int length,int arr[])
{
    for(int i=0;i<length;i++)
    cout<<" "<<arr[i];
}

void root_to_leaf(node *root,int arr[],int length)
{
    if(!root) return;
    
     arr[length]=root->data;
    length++;

    if(!root->lchild &&  !root->rchild)
    {printall(length,arr);
    cout<<endl;}

    root_to_leaf(root->lchild,arr,length);
    root_to_leaf(root->rchild,arr,length);

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
    display1(root);
    cout << endl;
    int length=0;
    root_to_leaf(root,arr,length);
    return 0;
}