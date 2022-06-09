#include "bst.h"
#include <stack>

int height(node *root)
{
    if (root == NULL)
    {
        return -1;
    }
    int count = 0;
    stack<node *> s;
    while (true)
    {
        if (root != NULL)
        {
            s.push(root);
            root = root->lchild;
        }
        else
        {
            if (s.empty())
            {
                break;
            }
            count++;
            root=s.top();
            s.pop();
            root = root->rchild;
        }
    }
    return count;
}

int main()
{
    node *root = new node(6);
    bst b;
    b.insert(root, 1);
    b.insert(root, 7);
    b.insert(root, 8);
    b.insert(root, 9);
    b.insert(root, 0);
    b.insert(root, 2);
    b.insert(root, 3);
    b.insert(root, 4);
    b.insert(root, 5);
    b.display(root);
    cout << " The height of tree is " << height(root);
}