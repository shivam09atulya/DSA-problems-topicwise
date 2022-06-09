#include <stdio.h>
#include <stdlib.h>
struct node
{
    struct node *left;
    int data;
    struct node *right;
} *root = NULL;

struct node *newnode(int data)
{
    struct node *t = (struct node *)malloc(sizeof(struct node));
    t->data = data;
    t->left = t->right = NULL;
    return t;
}

struct node *insert(struct node *p, int data)
{
    if (p == NULL)
        return newnode(data);

    else if (data < p->data)
        p->left = insert(p->left, data);

    else if (data > p->data)
        p->right = insert(p->right, data);

    return p;
}
void Preoder(struct node *p)
{
    if (p)
    {
        printf(" %d ", p->data);
        Preoder(p->left);
        Preoder(p->right);
    }
}
/*
void main()
{
    root = insert(root, 20);
    insert(root, 10);
    insert(root, 30);
    insert(root, 5);
    insert(root, 15);
    insert(root, 25);
    insert(root, 35);
    Preoder(root);
}
*/