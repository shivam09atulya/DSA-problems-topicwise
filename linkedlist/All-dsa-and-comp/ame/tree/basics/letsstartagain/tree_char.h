#include <iostream>
#include <queue>
using namespace std;

class node
{
public:
    node *lchild;
    char data;
    node *rchild;

    node(char val)
    {
        data = val;
        lchild = rchild = NULL;
    }
    void create();
};

void display(node *root)
{
    if (root)
    {
        display(root->lchild);
        cout << " " << root->data;
        display(root->rchild);
    }
}

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
                if (root->lchild)
                    q.push(root->lchild);

                if (root->rchild)
                    q.push(root->rchild);

                q.pop();
                countnode--;
            }
            cout << endl;
        }
    }
}
