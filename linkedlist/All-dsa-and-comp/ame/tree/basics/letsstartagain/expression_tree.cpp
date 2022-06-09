#include "tree_char.h"
#include<stack>

bool isOperand(char data)
{
    if(data=='+'||data=='-'||data=='*'||data=='/')
    return true;
    else
    return false;
}

node *buildTree(char post[])
{
    if(!post) return NULL;

    else
    {
        int i =0;
        stack <node *> s;
        node *head;
        while(post[i]!='\0')
        {
            if(isOperand(post[i]))
            {
                node *root=new node(post[i]);
                head=root;
                root->rchild=s.top();
                s.pop();
                root->lchild=s.top();
                s.pop();
                s.push(root);
            }

            else
            {
                node *root=new node(post[i]);
                s.push(root);
            }
            i++;
        }

        return head;
    }
    return NULL;
}


int main()
{
    char post[]={"ABC*+D/"};
node *root=    buildTree(post);
display1(root);
    return 0;
}