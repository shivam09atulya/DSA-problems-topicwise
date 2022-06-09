#include "bst.h"
#include<stack>

int kthsmall(node *root,int k)
{
    if(!root) return INT_MIN;

    else
    {
        stack <node *> s;
        int count=0;
        while(1)
        {
            if(count==k)
            break;
            if(root)
            {
               
                s.push(root);
                // cout<<" "<<root->data;
                root=root->left;
            }
            else
            {
                if(s.size()==0) break;
                root=s.top();
                count++;
                if(count==k)
                break;
                root = root->right;
                s.pop();
            }
            
        }
        return root->data;
    }
}

int main()
{
    node *root=new node(4);
    bst b;
    b.insert(root,2);
    b.insert(root,6);
    b.insert(root,1);
    b.insert(root,3);
    b.insert(root,5);
    b.insert(root,7);
    // display(root);cout<<endl;
    // display1(root);
    cout<<kthsmall(root,3);
    return 0;
}

/*
Tranverse the tree in inorder and while outputing it (inorder) take a count , if the count reaches k then break
*/ 