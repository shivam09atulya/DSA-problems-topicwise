#include<stdio.h>
#include<stdlib.h>
struct node{
    struct node *left;
    int data;
    struct node *right;
}*root=NULL;
struct queue{
    int front;
    int rear;
    int size;
    struct node **p;
}q;
void create()
{
    q.size=100;
    q.front=q.rear=0;
    q.p=(struct node**)malloc(q.size*sizeof(struct node*));
}
int isEmpty()
{
    return q.rear==q.front;
}
void enqueue(struct node *x)
{
    if((q.rear+1)%q.size==q.front)
    {
        printf("Queue Overflow!!!\n");
    }
    q.rear=(q.rear+1)%q.size;
    q.p[q.rear]=x;
}
struct node *dequeue()
{
    struct node *x=NULL;
    if(q.front==q.rear)
    {
        printf("Queue Underflow!!!\n");
    }
    else{
    q.front=(q.front+1)%q.size;
    x=q.p[q.front];
    }
    return x;
}


void createTree()
{
    struct node *t,*p;
    int x;
    printf("Enter the root node = \n");
    scanf("%d",&x);
    root=(struct node*)malloc(sizeof(struct node));
    root->left=root->right=NULL;
    root->data=x;
    enqueue(root);
    do{
        p=dequeue();
        printf("Enter the left child of %d = ",p->data);
        scanf("%d",x);
        if(x!=-1){
        t=(struct node*)malloc(sizeof(struct node));
        t->data=x;
        t->right=t->left=NULL;
        p=t->left;
        enqueue(t);
        }

        printf("Enter the right child of %d = ", p->data);
        scanf("%d", x);
        if (x != -1)
        {
            t = (struct node *)malloc(sizeof(struct node));
            t->data = x;
            t->right = t->left = NULL;
            p = t->right;
            enqueue(t);
        }

    }while(isEmpty());
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

void Inoder(struct node *p)
{
    if(p)
    {
        Inoder(p->left);
        printf("%d ",p->data);
        Inoder(p->right);
    }
}

void Postoder(struct node *p)
{
    if (p)
    {
        printf("%d ", p->data);
        Inoder(p->left);
        Inoder(p->right);
    }
}
void main()
{
    createTree();
    printf("Preoder = \n");
    Preorder(root);
    printf("Inoder = \n");
    Inoder(root);
    printf("Postoder = \n");
    Postoder(root);
}