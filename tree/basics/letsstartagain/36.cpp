#include "tree.h"
#include <queue>
#include <stack>

// goto label;   and then     label:
int min_deep_node(node *root)
{
    if (!root)
        return INT_MIN;

    else
    {
        queue<node *> q;
        stack<pair<int, int>> s;

        int countnode = 0, height = 0;
        q.push(root);

        while (true)
        {
            countnode = q.size();

            if (countnode == 0)
                break;

            height++;

            while (countnode > 0)
            {
                root = q.front();

                if (root->lchild)
                    q.push(root->lchild);

                if (root->rchild)
                    q.push(root->rchild);

                if (!root->lchild && !root->rchild)
                    goto hello;
                q.pop();
                countnode--;
            }
        }
    hello:
        int deep = root->data;
        return deep;
    }
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
    cout << min_deep_node(root);
    return 0;
}