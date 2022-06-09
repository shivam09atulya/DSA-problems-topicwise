//creating tree
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
    struct node **p;
}q;
void create()
{   
    q.size=100;
    q.front=q.rear=0;
    q.p=(struct node **)malloc(q.size*sizeof(struct node*));

}
void enqueue(struct node *x)
{
    if((q.rear+1)%q.size==q.front)
    printf("Queue is full !!!\n");
    else{
        q.rear=(q.rear+1)%q.size;
        q.p[q.rear]=x;
    }
}
struct node *dequeue()
{
    struct node *x=NULL;
    if(q.front==q.rear)
        printf("Queue Underflow!!!\n");
    else{
        q.front=(q.front+1)%q.size;
        x=q.p[q.front];
        }
    return x;
}
int isEmpty()
{
    return q.front==q.rear;
}
void treeCreate()
{
    struct node *p,*t;
    int x;
    struct queue Q;
    create();
    printf("Enter the root value= \n");
    scanf("%d",&x);
    root=(struct node *)malloc(sizeof(struct node));
    root->data=x;
    root->left=root->right=NULL;
    enqueue(root);
    do
    {
        p=dequeue();
        printf("Enter left child of %d = ",p->data);
        scanf("%d",&x);
        
        if(x!=-1)
        {
            t=(struct node* )malloc(sizeof(struct node));
            t->data=x;
            t->left=t->right=NULL;
            p->left =  t;
            enqueue(t);

        }
        printf("Enter rigth child of %d = ",p->data);
        scanf("%d",&x);
        if(x!=-1)
        {
            t=(struct node*)malloc(sizeof(struct node));
            t->data=x;
            t->left=t->right=NULL;
            p->right=t;
            enqueue(t);
        }
    } while (!isEmpty());
}

void Preorder(struct node *p)
{
    if (p)
    {
        printf("%d ", p->data);
        Preorder(p->left);
        Preorder(p->right);
    }
}
void main()
{
    treeCreate();
    Preorder(root);

}