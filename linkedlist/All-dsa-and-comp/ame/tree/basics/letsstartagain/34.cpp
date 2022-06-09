#include <iostream>
#include<queue>

using namespace std;

class node{
    public:
    int data;
    node *left=NULL;
    node *right=NULL;
    node *nextSib=NULL;

    node (int val)
    {
        data=val;
        left=right=nextSib=NULL;
    }
};

    void display1(node * root)
    {
        if (!root)
            return;

        else
        {
            queue<node *> q;
            int countnode;
            q.push(root);

            while (1)
            {
                countnode = q.size();

                if (countnode == 0)
                    break;

                while (countnode > 0)
                {
                    root = q.front();
                    cout << " " << root->data;
                    if (root->left)
                        q.push(root->left);

                    if (root->right)
                        q.push(root->right);

                    q.pop();
                    countnode--;
                }
                cout << endl;
            }
        }
}

node * nextSibling(node *root)
{
    if(!root) return NULL;

    else
    {
        queue <node *> q;
        q.push(root);
        q.push(NULL);
        node *head=root;

        while(!q.empty())
        {
            root=q.front();
            q.pop();

            if(root==NULL)
            {
                if(!q.empty())
                q.push(NULL);

            }
            else
            {
                root->nextSib=q.front();
                if(root->left)
                    q.push(root->left);
                if(root->right)
                    q.push(root->right);
            }
        }
        return head;
    }
}
int main()
{
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    display1(root);
 root=   nextSibling(root);
    
    cout<<root->left->nextSib->data<<endl;
    
    cout<<root->left->left->nextSib->data<<endl; 
    cout<<root->left->right->nextSib->data<<endl; 
    cout << endl;
    return 0;
}