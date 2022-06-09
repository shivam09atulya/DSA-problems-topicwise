#include "tree.h"
#include<vector>
#define len 1000


void printall(int length, vector <int > v)
{
    for (int i = 0; i < length; i++)
        cout << " " << v[i];
}

void root_to_leaf(node *root, vector <int >v, int length)
{
    if (!root)
        return;

    v.push_back (root->data);
    length++;

    if (!root->lchild && !root->rchild)
    {
        printall(length, v);
        cout << endl;
    }

    root_to_leaf(root->lchild, v, length);
    root_to_leaf(root->rchild, v, length);
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
    int length = 0;
    vector <int > v;
    root_to_leaf(root, v, length);
    return 0;
}