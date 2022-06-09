#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
}*root;

struct node *newnode(int x)
{
    struct node *t;
    t=(struct node*)malloc(sizeof(struct node));
    t->data=x;
    t->left=t->right=NULL;
    return t;
}

struct node *insert(struct node *p,int data)
{
    if(p==NULL)
    return newnode(data);

    else if(data<p->data)
    p->left=insert(p->left,data);

    else if(data>p->data)
    p->right=insert(p->right,data);

    return p;
}

struct node *Preoder(struct node *p)
{
    if(p)
    {
          printf(" %d ",p->data);
        Preoder(p->left);
          Preoder(p->right);
    }
}

void main()
{
    root=insert(root,5);
    insert(root,9);
    insert(root, 6);
    insert(root, 4);
    insert(root, 3);
    insert(root, 8);
    insert(root, 7);
    Preoder(root);
}