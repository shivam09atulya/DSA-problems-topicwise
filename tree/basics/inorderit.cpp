#include "bst.h"
#include <stack>
using namespace std;

void inorder(node *root)
{
    if (root == NULL)
        return;

    else
    {
        stack<node *> s;
        node *temp = root;
        // s.push(temp);
        // cout<<" "<<temp->data;
        while (true)
        {
            if (temp != NULL)
            {
                s.push(temp);
                temp = temp->lchild;
            }
            else
            {
                if (s.empty())
                {
                    break;
                }

                temp = s.top();
                cout << " " << temp->data;
                s.pop();
                temp = temp->rchild;
            }
        }
    }
}

int main()
{
    node *root = new node(20);
    bst b;
    b.insert(root, 20);
    b.insert(root, 10);
    b.insert(root, 60);
    b.insert(root, 90);
    b.insert(root, 70);
    inorder(root);
    return 0;
}