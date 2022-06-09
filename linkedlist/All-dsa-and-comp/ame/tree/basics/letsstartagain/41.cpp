#include "generic.h"

int no_of_sib(node *root)
{
    if(!root) return 0;

    return (no_of_sib(root->nextsib)+1);

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
    display1(root);cout<<endl;
    cout<<no_of_sib(here);
    return 0;
}