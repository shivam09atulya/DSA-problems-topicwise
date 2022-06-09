#include <iostream>
#include <stack>
#include<queue>
#include<stack>


using namespace std;
class node
{
public:
    int data;
    node *lchild;
    node *rchild;

    node(int val)
    {
        data = val;
        lchild = rchild = NULL;
    }
};

void display(node *root)
{
    if (root == NULL)
        return;
    stack<node *> s;

    while (true)
    {
        if (root != NULL)
        {
            s.push(root);
            root = root->lchild;
        }
        else
        {
            if (s.empty())
            {
                break;
            }

            root = s.top();
            s.pop();
            cout << " " << root->data;
            root = root->rchild;
        }
    }
}

void inorder(node *root)
{
   
    if(root==NULL){return;}
    else
    {
      queue <node *>q;
         q.push(root);

      while(!q.empty())
      {
        node *temp=q.front();
        cout<<" "<<temp->data;
        q.pop();

          if(temp->lchild)
          q.push(temp->lchild);

          if(temp->rchild)
          q.push(temp->rchild);
      }
    }
    
}

    void rev_trans(node *root)
    {
        stack<int> s;
        if(!root)
        return;

        else{
            queue <node *> q;
            
            q.push(root);
            s.push(root->data);
            while(!q.empty())
            {
                node *temp=q.front();
                q.pop();

                if(temp->lchild){
                q.push(temp->lchild);
                s.push(temp->lchild->data);}

                if(temp->rchild){
                q.push(temp->rchild);
                s.push(temp->rchild->data);}
            }

            while (!s.empty())
            {
                cout << " " << s.top();
                s.pop();
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
    rev_trans(root);cout<<endl;
    // inorder(root);
    return 0;
}