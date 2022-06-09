#include <iostream>
#include<queue>

using namespace std;

class node{
    public:
    int data;
    node *first;
    node *nextsib;

    node(int val)
    {
        data=val;
        first=NULL;
        nextsib=NULL;
    }
};

void display1(node *root)
{
    if (!root)
        return;

    else
    {
        int countnode;
        queue<node *> q;
        q.push(root);
        while (!q.empty())
        {
            countnode = q.size();

            if (countnode == 0)
                break;

            while (countnode > 0)
            {
                root = q.front();

                cout << " " << root->data;

                if (root->nextsib)
                    q.push(root->nextsib);
                if (root->first)
                    q.push(root->first);


                countnode--;
                q.pop();
            }
            cout << endl;
        }
    }
}

void display(node *root)
{
    if (root)
    {
        cout << " " << root->data;
        display(root->first);
        display(root->nextsib);
        cout<<endl;
    }
}