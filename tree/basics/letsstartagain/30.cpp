#include "tree.h"
#include <queue>
#include <stack>

void zig_zag(node *root)
{
    if (!root)
        return;

    else
    {
        queue<node *> q1,q2;
        stack <node *> s;
          int countnode = 0,oddeven=1;
        q1.push(root);
        cout<<" "<<q1.front()->data;
        while (true)
        {
            countnode = q1.size();

            if (countnode == 0)
                return;

            while (countnode > 0)
            {
                root = q1.front();

                if (root->lchild && oddeven%2==0){
                    q1.push(root->lchild);
                    q2.push(root->lchild);}

                if (root->rchild && oddeven%2==0){
                    q1.push(root->rchild);
                    q2.push(root->rchild);}

                if(root->lchild && oddeven%2!=0)
                {
                    q1.push(root->lchild);
                    s.push(root->lchild);
                }

                if(root->rchild && oddeven%2!=0)
                {
                    q1.push(root->rchild);
                    s.push(root->rchild);
                }
                q1.pop();
                countnode--;
            
            if(oddeven%2==0)
            {
                while(!q2.empty())
                {
                    cout<<" "<<q2.front()->data;
                    q2.pop();
                }
            }

            else if(oddeven%2!=0)
            {
                while(!s.empty())
                {
                    cout<<" "<<s.top()->data;
                    s.pop();
                }
            }
            oddeven++;
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
    root->lchild->lchild->lchild = new node(8);
    root->lchild->lchild->rchild = new node(9);
    root->rchild->lchild->lchild = new node(10);
    root->rchild->lchild->rchild = new node(11);
    root->rchild->rchild->lchild = new node(12);
    root->rchild->rchild->lchild->rchild = new node(13);
    root->rchild->rchild->lchild->rchild->lchild = new node(14);
    root->rchild->rchild->lchild->rchild->rchild = new node(15);
    // root->rchild->rchild->lchild = new node(10);
    // display(root);
    cout << endl;
     zig_zag(root);
    return 0;
}