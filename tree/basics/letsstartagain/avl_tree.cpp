#include <iostream>
#include<queue>
using namespace std;


class node
{
public:
    node *left;
    int data;
    int height;
    node *right;

    node()
    {
        data = 0;
        height=1;
        left = right = NULL;
    }

    node(int val)
    {
        height=1;
        data = val;
        left = right = NULL;
    }

    
};

class avl
{
public:
    node *root;
    node *insert(node *root, int val);
    void display(node *root);
    void display1(node *root);
    node *LLRotation(node *root);
    // node *RRRotation(node *root);
    // node *LRRotation(node *root);
    // node *RLRotation(node *root);
};



int balanceFactor(node *root)
{

    if(!root || !root->left && !root->right)
    return 0;

    if(!root->right && root->left)
    return (root->left->height);

    if(!root->left && root->right)
    return (0 - root->right->height);

    if (root)
        return ((root->left->height - root->right->height)+1);
}

int nodeHeight(node *node)
{
    if (node == NULL)
        return 0;

    if(!node->left && !node->right)
    return 0;

    else
    {
        /* compute the depth of each subtree */
        int lDepth = nodeHeight(node->left);
        int rDepth = nodeHeight(node->right);

        /* use the larger one */
        if (lDepth > rDepth)
            return (lDepth + 1);
        else
            return (rDepth + 1);
    }
}

node *avl::insert(node *root, int val)
{
    if (!root)
        return new node(val);

    if (root->data < val)
        root->right = insert(root->right, val);             //Explaination of this below

    if (root->data > val)
        root->left = insert(root->left, val);

    root->height=nodeHeight(root);

    if(balanceFactor(root)==2 && balanceFactor(root->left)==1)
        return LLRotation(root);
    // else if(balanceFactor(root)==2 && balanceFactor(root->left)==-1)
    //     return LRRotation(root);
    // if(balanceFactor(root)==-2 && balanceFactor(root->left)==-1)
    //     return RRRotation(root);
    // if(balanceFactor(root)==-2 && balanceFactor(root->left)==1)
    //     return RLRotation(root);

    
    return root;
}

void avl::display(node *root)
{
    if (root)
    {
        display(root->left);
        cout << " " << root->data;
        display(root->right);
    }
}

void avl::display1(node *root)
{
    if(!root)
    return;

    else
    {
        queue <node *> q;
        int nodecount=0;

        q.push(root);
        while (1)
        {
            nodecount=q.size();

            if(nodecount==0)
                return;

            while (nodecount>0)
            {
                root=q.front();
                cout<<" "<<q.front()->data;

                if(root->left)
                q.push(root->left);

                if(root->right)
                q.push(root->right);

                nodecount--;
                q.pop();

            }
            cout<<"\n";
            
        }
        
    }
    return;
}

void heightDisplay(node *root)
{
    if (root)
    {
        heightDisplay(root->left);
        cout << " " << root->height;
        heightDisplay(root->right);
    }
}

void displayBalance(node *root)
{
    if (root)
    {
        displayBalance(root->left);
        cout<<" "<<balanceFactor(root);
        displayBalance(root->right);
    }
    
}


node *avl::LLRotation(node *p)
{
    node *pl=p->left;
    node *plr=pl->right;

    pl->right=p;
    p->left=pl;
    pl->height=nodeHeight(pl);
    plr->height=nodeHeight(plr);

    if(p==this->root)
    root=pl;

    return pl;
}

int main()
{
    avl *b=new avl();        //Here we have to initialize and then refernce so not only avl *b but avl *b=new avl()
    b->root = new node(10);
    b->insert(b->root, 5);
    b->insert(b->root, 2);
    b->insert(b->root, 12);
    b->insert(b->root, 20);
    b->insert(b->root, 80);
    b->display(b->root);
    cout << endl;
    b->display1(b->root);
    cout<<"\n";
    cout<<"There heights \n";
    heightDisplay(b->root);cout<<endl;
    displayBalance(b->root);cout<<endl;
    b->display1(b->root);
     
    return 0;
}

/*
    so insert is a function which takes root and a value to be inserted and returns the root once the value is inserted
    So inside the function the pointer (root) searches for the the point where it should be inserted .
    Lets suppose the value to be inserted is smaller than root then it will go at the left side of root so root->left=insert(root->left,val)
                                                                                                                                this is because
                                                                                                                                once we know that 
                                                                                                                                it is left of root
                                                                                                                                then we pass the root->left
                                                                                                                                so that it inserts the value
                                                                                                                                and return back to left of root
                                                                                                                

*/ 