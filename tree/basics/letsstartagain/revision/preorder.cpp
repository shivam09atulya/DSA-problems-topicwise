#include<iostream>
#include<stack>
#include<time.h>
using namespace std;

class node {
    public:
    int data;
    node *left;
    node *rigth;

    node ()
    {
        data=0;
        left=NULL;
        rigth=NULL;
    }

    node (int val)
    {
        data=val;
        left=NULL;
        rigth=NULL;
    }
};

void preorder(node *root)
{
    if(!root)
    return;

    else
    {
        stack <node *> s;

        s.push(root);
        while (1)
        {
            if(root)
            {
              
                s.push(root);
                root=root->left;
            }

            else
            {
                if(s.size()==0) break; 
                root=s.top();
                  cout<<" "<<root->data;
                root=root->rigth;
                s.pop();
            }
        }
        
    }
}

int main()
{
    time_t start,end;
    clock_t t;
    t=clock();
    start=time(NULL);
    class node *root = new node(1);
    root->left = new node(2);
    root->rigth = new node(3);
    root->left->left = new node(4);
    root->left->rigth = new node(5);
    root->rigth->left = new node(6);
    root->rigth->rigth = new node(7);
    preorder(root);
    t=clock()-t;
    cout<<"\nNo of clicks "<<t<<" \n"<<(float)t/CLOCKS_PER_SEC<<"seconds";
    end=time(NULL);
    cout<<"\nTime Taken : "<<difftime(end,start);
    return 0;
}