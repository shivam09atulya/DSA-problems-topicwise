#include <iostream>
#include <queue>

using namespace std;

class node
{
public:
    int data;
    node *left = NULL;
    node *right = NULL;
    node *nextSib = NULL;

    node(int val)
    {
        data = val;
        left = right = nextSib = NULL;
    }
};

void display1(node *root)
{
    if (!root)
        return;

    else
    {
        queue<node *> q;
        int countnode;
        q.push(root);

        while (1)
        {
            countnode = q.size();

            if (countnode == 0)
                break;

            while (countnode > 0)
            {
                root = q.front();
                cout << " " << root->data;
                if (root->left)
                    q.push(root->left);

                if (root->right)
                    q.push(root->right);

                q.pop();
                countnode--;
            }
            cout << endl;
        }
    }
}