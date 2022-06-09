#include<iostream>

using namespace std;

class bst{
    int data;
    bst *right,*left;

    public:
    bst();
    bst(int val);
    bst* insert(bst *root,int value);
    void inoder(class bst*);
};

bst::bst():
    data(0),
    right(NULL),
    left(NULL){}

bst :: bst(int val)
{
    data=val;
    right=NULL;
    left=NULL;
}

bst* bst::insert(bst *root,int val)
{
    if(root==NULL)
    return new bst(val);

    if(val>root->data)
    root->right=insert(root->right,val);

    else
    root->left=insert(root->left,val);

    return root;
}

void bst::inoder(class bst *root)
{
    if(root)
    {inoder(root->left);
    cout<<" "<<root->data;
    inoder(root->right);}
}

int main()
{
    bst b,*root=NULL;
    root=b.insert(root,50);
    b.insert(root,30);
    b.insert(root,40);
    b.insert(root,20);
    b.insert(root,90);
    b.insert(root,10);
    b.insert(root,70);
    b.inoder(root);
    return 0;
}