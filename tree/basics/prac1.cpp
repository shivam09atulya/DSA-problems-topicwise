#include "bst.h"
#include <stack>
using namespace std;

void postorder(node *root)
{
    if (root == NULL)
        return;

    else{
        stack <node *>s;
        node *prev=NULL;

        do{
            while(root!=NULL)
            {
                s.push(root);
                root=root->lchild;
            }

            while(root==NULL && !s.empty())
            {
                root=s.top();
                if(root->rchild==NULL || root->rchild==prev)
                {cout<<" "<<root->data;
                s.pop();
                prev=root;
                root=NULL;
                }
            
            else
            {
                root=root->rchild;
            }

            }
        }while(!s.empty());
    }
}

int main()
{
    node *root = new node(4);
    bst b;
    b.insert(root, 2);
    b.insert(root, 1);
    b.insert(root, 3);
    b.insert(root, 5);
    b.insert(root, 6);
    postorder(root);
    return 0;
}
// inserting left subtree in stack and then going to righth sub tree . Only way to go to right sub tree is through root node so when pointer goes from
// left to right then root in the stack after crossing is poped out