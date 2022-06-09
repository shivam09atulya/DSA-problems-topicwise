#include "tree.h"
#include <queue>
#include <stack>

void str_iden(node *root1,node *root2)
{
    if (!root1 && !root2){
        cout<<"Identical ;)";
        return;}

    else
    {
        queue<node *> q1,q2;
        int countnode = 0, height = 0, half_node = 0;
        q1.push(root1);
        q2.push(root2);

        while (true)
        {
            if(q1.size()!=q2.size())
            {
                cout<<"Not Identical";
                return;
            }

            countnode = q1.size();

            if (countnode == 0)
            {
                cout<<"Identical";
                return;
            }

            while (countnode > 0)
            {
                root1 = q1.front();
                root2 = q2.front();

                if (root1->lchild)
                    q1.push(root1->lchild);

                if (root1->rchild)
                    q1.push(root1->rchild);

                if (root2->lchild)
                    q2.push(root1->lchild);

                if (root2->rchild)
                    q2.push(root2->rchild);

                q1.pop();
                q2.pop();
                countnode--;
            }
        }
    }
}

int main()
{
    node *root1 = new node(1);
    root1->lchild = new node(2);
    root1->rchild = new node(3);
    root1->lchild->lchild = new node(4);
    root1->lchild->rchild = new node(5);
    root1->rchild->lchild = new node(6);
    root1->rchild->rchild = new node(7);
    node *root2 = new node(1);
    root2->lchild = new node(2);
    root2->rchild = new node(3);
    root2->lchild->lchild = new node(4);
    root2->lchild->rchild = new node(5);
    root2->rchild->lchild = new node(6);
    // root2->rchild->rchild = new node(7);
    // root->rchild->rchild->lchild = nh ew node(10);
    str_iden(root1,root2);
    return 0;
}
