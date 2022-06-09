#include <iostream>
#include <queue>

using namespace std;

struct node
{
    node *lchild;
    int data;
    node *rchild;

    node(int val)
    {
        data = val;
        lchild = NULL;
        rchild = NULL;
    }
};

void preoder(struct node *p)
{
    if (p)
    {
        cout << " " << p->data;
        preoder(p->lchild);
        preoder(p->rchild);
    }
    // cout<<endl;
}

int main()
{
    queue<node *> q;
    int x;
    struct node *root = new node(5);
    struct node *p;
    q.push(root);
    while (!q.empty())
    {
        p = q.front();
        q.pop();
        cout << "Enter left child of  " << p->data << endl;
        cin >> x;

        if (x != -1)
        {
            struct node *t = new node(x);
            p->lchild = t;
            q.push(t);
        }

        cout << "Enter right child of" << p->data << endl;
        cin >> x;

        if (x != -1)
        {
            struct node *t = new node(x);
            p->rchild = t;
            q.push(t);
        }
    }
    preoder(root);
    return 0;
}