#include "tree.h"

// Logic same as LCA in tushar video 
// If found then return the non NULL value else return NULL
// or '||' of both if any one is not NULL then print it which indeed is the anscestor

node * printAnsc(node *root,int val)
{
    if(!root) return NULL;

    if(root->data==val)
    {
        cout<<" "<<root->data;
        return root;
    }

    if(printAnsc(root->lchild,val) || printAnsc(root->rchild,val))     //Very important learning if we have to compare simultaneously then use if and use both recurrsion there only otherwise the whole recurrsion will first search in left and then right not behaving properly
    {
        cout<<" "<<root->data;
        return root;
    }
 
    return root;

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
    root->rchild->rchild->lchild = new node(10);
    display1(root);
    cout << endl;
    printAnsc(root,4);
    return 0;
}