#include "generic.h"

bool isomorphic(node *root1,node * root2)
{
    if(!root1 && !root2)
    return true;

    if(!root1 || !root2)
    return false;

    else
    {
        queue <node *> q1,q2;
        int countnode=0;
        q1.push(root1);
        q2.push(root2);

        while(1)
        {
            countnode=q1.size();
            if(countnode==0 || q1.empty() || q2.empty())
            break;

            while(countnode>0)
            {
                root1=q1.front();
                root2=q2.front();

                if(root1->first && root2->first)
                {
                    q1.push(root1->first);
                    q2.push(root2->first);
                }

                if(root1->nextsib && root2->nextsib)
                {
                    q1.push(root1->nextsib);
                    q2.push(root2->nextsib);
                }
                countnode--;
                q1.pop();q2.pop();
            }

            

        }
        if (!q1.empty() && !q2.empty())
            return true;
        else
            return false;
    }
    return false;
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

    node *root1 = new node(1);
    root1->first = new node(2);
    root1->first->nextsib = new node(3);
    root1->first->nextsib->nextsib = new node(4);
    root1->first->nextsib->nextsib->nextsib = new node(5);
    // root1->first->nextsib->nextsib->nextsib->nextsib = new node(6);
    root1->first->first = new node(5);
    display1(root);cout<<endl;
    display1(root1);
    // display(root);
    cout << endl;
    cout << isomorphic(root,root1);
    return 0;
}