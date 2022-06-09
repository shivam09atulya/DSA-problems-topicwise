#include <iostream>
#include<queue>

using namespace std;

class node{
    public:
    node *left;
    int data;
    int height;
    node *right;

    node()
    {
        data=0;
        left=right=NULL;
    }
    
    node(int val)
    {
        data=val;
        left=right=NULL;
    }
};


class avl{
    public:
    node *root;
    node *insert(node *root,int val);
    node *LLrotation(node *p);
};

int nodeHeight(node *root)
{
    if (!root)
        return 0;

    else
    {
        int l = nodeHeight(root->left);
        int r = nodeHeight(root->right);

        return (l > r) ? (l + 1) : (r + 1);
    }
}

int nodeHeight1(node *root)
{
  if(!root)
  return -1;

  else
  return root->height;
}
int heightBalance(node *root)
{
    if(!root)
    return 0;

    return (nodeHeight1(root->left) - nodeHeight1(root->right));
}

node *avl::LLrotation(node *p)
{
    if(!p)
    return NULL;
    node *pl = p->left;
    node *plr = pl->right;

    pl->right = p;
    p->left = pl;
    pl->height = nodeHeight(pl);
    plr->height = nodeHeight(plr);

    if (root== p )
        root = pl;

    return pl;
}
node *avl::insert(node *root,int val)
{
    if(!root)
    return new node(val);

    if(root->data<val)
    root->right=insert(root->right,val);

    if(root->data>val)
    root->left=insert(root->left,val);

    root->height=nodeHeight1(root);
    if(heightBalance(root)==2 && heightBalance(root->left)==1)
    // return LLrotation(root);
    cout<<"Finally\n";

    return root;
}



void display(node *root)
{
    if(root)
    {
        display(root->left);
        cout<<" "<<root->data;
        display(root->right);
    }
}

void display1(node *root)
{
    if (!root)
        return;

    else
    {
        queue<node *> q;
        int nodecount = 0;

        q.push(root);
        while (1)
        {
            nodecount = q.size();

            if (nodecount == 0)
                return;

            while (nodecount > 0)
            {
                root = q.front();
                cout << " " << q.front()->data;

                if (root->left)
                    q.push(root->left);

                if (root->right)
                    q.push(root->right);

                nodecount--;
                q.pop();
            }
            cout << "\n";
        }
    }
    return;
}

int main()
{
    avl *a=new avl();
    a->root=new node(10);
    a->insert(a->root,5);
    a->insert(a->root,4);
    // a->insert(a->root,12);
    display1(a->root); cout<<endl;  
    cout<<" "<<a->root->height<<endl;
    display1(a->root);cout<<endl;
    return 0;
}