#include "tree.h"
#include <queue>
#include <stack>

int half_node(node *root)
{
    if (!root)
        return INT_MIN;

    else
    {
        queue<node *> q;
        stack<pair<int, int>> s;

        int countnode = 0, height = 0, half_node = 0;
        q.push(root);

        while (true)
        {
            countnode = q.size();

            if (countnode == 0)
                return half_node;

            while (countnode > 0)
            {
                root = q.front();

                if (root->lchild)
                    q.push(root->lchild);

                if (root->rchild)
                    q.push(root->rchild);

                if (root->lchild && !root->rchild || !root->lchild && root->rchild )
                    half_node++;

                q.pop();
                countnode--;
            }
        }
     
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
    // root->rchild->rchild->lchild = new node(10);
    display(root);
    cout << endl;
    cout << half_node(root);
    return 0;
}