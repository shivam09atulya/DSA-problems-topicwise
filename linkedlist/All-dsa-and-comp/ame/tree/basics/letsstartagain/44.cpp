#include "generic.h"

node *convert(node *root)
{
    if(!root)
    return NULL;

    node *temp=root->nextsib;
    root->nextsib=root->first;
    root->first=temp;

    return root;
}

bool quasi(node *root1,node *root2)
{
    if(!root1 && !root2)
    return true;

    if(!root1 || !root2)
    return false;

    node *qroot1=convert(root1);
    
    while(root1 && root2)
    {
        if(qroot1->data!=root2->data)
        return false;

        qroot1=qroot1->first;

    }

}


int main()
{
    node *root = new node(1);
    root->first = new node(2);
    root->first->nextsib = new node(3);
    root->first->nextsib->nextsib = new node(4);
    root->first->nextsib->nextsib->nextsib = new node(5);
    root->first->nextsib->nextsib->nextsib->nextsib = new node(6);
    root->first->first = new node(5);
    display(root);cout<<endl;
    node *qroot=convert(root);
    display(qroot);
    cout << endl;
    return 0;
}