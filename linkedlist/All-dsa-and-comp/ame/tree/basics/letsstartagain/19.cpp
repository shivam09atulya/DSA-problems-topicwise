#include "tree.h"
#include <queue>

int max_sum(node *root)
{
    if (!root)
        return INT_MIN;

    else
    {
        queue<node *> q;
        int countnode, sum=0,res=0;
        q.push(root);

        while (1)
        {
            countnode = q.size();

            if (countnode == 0)
                return res;

            while (countnode > 0)
            {
                root = q.front();
                cout<<" "<<root->data;
                if (root->lchild)
                    q.push(root->lchild);

                if (root->rchild)
                    q.push(root->rchild);
                

                q.pop();
                sum+=root->data;
                countnode--;
            }
            cout<<endl;
            if(res<sum)
            res=sum;
            sum=0;
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
    display(root);
    cout << endl;
    cout << max_sum(root);
    return 0;
}