#include "tree.h"
#include<queue>
#include<stack>

int deep_node(node *root)
{
    if(!root) return INT_MIN;

    else
    {
        queue <node *> q;
        stack <pair<int,int>> s;

        int countnode=0,height=0 ,deep;
        q.push(root);

        while(true)
        {
            countnode=q.size();

            if(countnode==0)
            break;

            height++;

            while(countnode>0)
            {
                root=q.front();

                if(root->lchild)
                    q.push(root->lchild);

                if(root->rchild)
                    q.push(root->rchild);

                if(!root->lchild && !root->rchild)
                    s.push({root->data,height+1});
                q.pop();
                countnode--;
            }
          
        }

        deep = 0;
        int deep_no;
        while (!s.empty())
        {
            if (deep < s.top().second)
              {  deep = s.top().second;
            deep_no = s.top().first;}
            s.pop();
        }
        return deep_no;
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
    display(root);
    cout << endl;
    cout<<deep_node(root);
    return 0;
}