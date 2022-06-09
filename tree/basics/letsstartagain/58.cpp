#include "bst.h"

node *buildbst(int *arr,int begin,int end)
{
    if(!arr) return NULL;

    if(end<begin)
    return NULL;

    if(begin==end)
    return new node(arr[begin]);

    int mid_index=(begin+end)/2;
    node *root=new node(arr[mid_index]);
    root->left=buildbst(arr,begin,mid_index-1);
    root->right=buildbst(arr,mid_index+1,end);

    return root;
}

int main()
{
    int arr[]={1,2,3,4,5,6,7};
    int size=sizeof(arr)/sizeof(int);
    node *root;
    root=buildbst(arr,0,size);
    display1(root);cout<<endl;
    display(root);
    return 0;
}