#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left;
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
    q.p=(struct node**)malloc(q.size*sizeof(struct node*));
}

void enqueue(struct node *x)
{
    if((q.rear+1)%q.size==q.front)
    {
        printf("Queue Overload !!!");
        return;
    }
    else{
        q.rear++;
        q.p[q.rear]=x;
    }
}

struct node *dequeue()
{
    struct node *x=NULL;
    if(q.front==q.rear)
    {
        printf("Queue Underflow!!!");
    }
    else
    {
        q.front++;
       x= q.p[q.front];
    }
    return x;
}

int isEmpty()
{
    return q.front==q.rear;
}

void treeCreate()
{
    int x;
    struct node *t,*p;
    create();
    printf("Enter the value of root node = \n");
    scanf("%d",&x);
    root=(struct node*)malloc(sizeof(struct node));
    root->left=root->right=NULL;
    root->data=x;
   
    enqueue(root);
    do{
        p=dequeue();
        printf("Enter the left node of %d ",p->data);
        scanf("%d",&x);
        if(x!=-1)
        {
            t = (struct node *)malloc(sizeof(struct node));
            t->data=x;
            t->left=t->right=NULL;
           p->left=t;
            enqueue(t);
        }
        printf("Enter the right node of %d ", p->data);
        scanf("%d", &x);
        if (x != -1)
        {
            t = (struct node *)malloc(sizeof(struct node));
            t->data = x;
            t->left = t->right = NULL;
            p->right=t;
            enqueue(t);
        }

    }while(!isEmpty());
    
}
void Inoder(struct node *p)
{
    if (p)
    {
        Inoder(p->left);
        printf("%d ", p->data);
        Inoder(p->right);
    }
}
void main()
{
    treeCreate();
    Inoder(root);
}