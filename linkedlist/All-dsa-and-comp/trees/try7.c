#include "bst.h"

int Height(struct node *p)
{
    int x,y;
    if(p==NULL)
     return 0;
    x=Height(p->left);
    y=Height(p->right);
    return x>y?x+1:y+1;
}

struct node *Inpre(struct node *p)
{
    while(p && p->right!=NULL)
    p=p->right;
    return p;
}

struct node *InSucc(struct node *p)
{
    while (p && p->left != NULL)
        p = p->left;
    return p;
}

struct node *delete(struct node *p,int key)
{
    struct node *q;
    if(p==NULL)
     return NULL;
    if(p->right == NULL && p->left==NULL)
    {
        if(p==root)
            root=NULL;
        free(p);
        return NULL;
    }
    if(key<p->data)
        p->left=delete(p->left,key);
    else if(key>p->data)
        p->right=delete(p->right,key);
    else{

        if (Height(p->left) > Height(p->left))
        {
            q = InPre(p->left);
            p->data = q->data;
            p->left = Delete(p->left, q->data);
        }
        else
        {
            q = InSucc(p->right);
            p->data = q->data;
            p->right = Delete(p->right, q->data);
        }
    }
    return p;
}

void main()
{
    root = insert(root, 50);
    insert(root, 10);
    insert(root, 40);
    insert(root, 20);
    insert(root, 30);
    Inorder(root);
    Delete(root, 30);
}