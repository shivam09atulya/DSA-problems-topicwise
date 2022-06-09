#include <iostream>
#include<stack>

using namespace std;
class node {
    public:
    int data;
    node *lchild;
    node *rchild;

    node(int val)
    {
        data=val;
        lchild=rchild=NULL;
    }
};

void display(node *root)
{
    if(root==NULL)
    return ;
    stack <node*> s;

    while(true){
        if(root!=NULL)
        {
            s.push(root);
            root=root->lchild;
        }
        else 
        {
            if(s.empty()){break;}

            root=s.top();
            s.pop();
            cout<<" "<<root->data;
            root=root->rchild;
        }
    }
    
}

int maxDepth(node *node)
{
    if (node == NULL)
        return 0;
    else
    {
        /* compute the depth of each subtree */
        int lDepth = maxDepth(node->lchild);
        int rDepth = maxDepth(node->rchild);

        /* use the larger one */
        if (lDepth > rDepth)
            return (lDepth + 1);
        else
            return (rDepth + 1);
    }
}

int main()
{
    node *root=new node(1);
    root->lchild=new node(2);
    root->rchild=new node(3);
    root->lchild->lchild=new node(4);
    root->lchild->rchild=new node(5);
    root->rchild->lchild=new node(6);
    root->rchild->rchild=new node(7);
    display(root);
    cout<<maxDepth(root);
    return 0;
}