#include "tree.h"
#include <queue>

    int sum(node *root)
    {
        if(!root)
        return 0;

        return (root->data + sum(root->lchild)+sum(root->rchild));
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
    display(root);
    cout << endl;
    cout << sum(root);
    return 0;
}