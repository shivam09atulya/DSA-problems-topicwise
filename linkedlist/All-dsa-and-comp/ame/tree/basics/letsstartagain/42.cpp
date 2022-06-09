#include "generic.h"

int nextchildcount(node *root)
{
    int count = 0;
    while (root)
    {
        count++;
        root = root->first;
    }
    return count;
}

int main()
{
    node *root = new node(1);
    node *here3 = root->first = new node(2);
    node *here = root->first->nextsib = new node(3);
    root->first->nextsib->nextsib = new node(4);
    node *here1 = root->first->nextsib->nextsib->nextsib = new node(5);
    node *here2 = root->first->nextsib->nextsib->nextsib->nextsib = new node(6);
    root->first->first = new node(5);
    display1(root);
    display(root);
    cout << endl;
    cout << nextchildcount(here3);
    return 0;
}