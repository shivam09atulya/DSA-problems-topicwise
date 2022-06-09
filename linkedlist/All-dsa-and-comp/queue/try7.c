#include<stdio.h>
#include<stdlib.h>
struct node{
    struct node *left;
    int data;
    struct node *right;
}*root=NULL;
struct queue{
    int size;
    int front;
    int rear;
    int *p;
}*q=NULL;
void create(int n)
{
    q->size=n;
    q->front=q->rear=0;
    q->p=(struct queue*)malloc(q->size*sizeof(struct queue));
}
void createTree(){
    int i,n,x;
    struct tree *t=NULL;
    printf("Enter the number of elements = \n");
    scanf("%d", &n);
    create(n);
    printf("Enter root value = \n");
    scanf("%d",&x);
    root=(struct node*)malloc(sizeof(struct node));
    root->data=x;
    root->left=root->right=NULL;
}
void main()
{
    createTree();
}