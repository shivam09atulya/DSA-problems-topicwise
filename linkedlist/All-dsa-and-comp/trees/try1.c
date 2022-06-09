#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *left;
    struct node *right;
}*root;

struct queue{
    int size;
    int rear;
    int front;
    struct node **p;
}q;

void create()
{
    q.size=5;
    q.front=q.rear=0;
    q.p=(struct node **)malloc(q.size*sizeof(struct node*));
}
void enqueue(struct node *x)
{
    if((q.rear+1)%q.size==q.front)
    printf("Queue Overflow!!!\n");
    q.rear=(q.rear+1)%q.size;
    q.p[q.rear]=x;
}
struct node *dequeue()
{   
    struct node *x;
    if(q.rear==q.front){
    printf("Queue Underflow!!!");
    }
    else{
    q.front=(q.front+1)%q.size;
    x=q.p[q.front];
    }
    return x;

}

int isEmpty()
{
    return q.front==q.front;
}
void createTree()
{
    struct node *t,*p;
    int x;
    create();
    printf("Enter the value of root node = \n");
    scanf("%d",&x);
    root=(struct node*)malloc(sizeof(struct node));
    root->left=root->right=NULL;
    root->data=x;
    enqueue(root);
    do{
        p=dequeue();
        printf("Enter the left value of %d = ",p->data);
        scanf("%d",&x);
        if(x!=-1)
        {
            t=(struct node*)malloc(sizeof(struct node));
            t->data=x;
            t->left=t->right=NULL;
            p->left=t;
            enqueue(t);
        }
        printf("Enter the left value of %d = ", p->data);
        scanf("%d", &x);
        if (x != -1)
        {
            t = (struct node *)malloc(sizeof(struct node));
            t->data = x;
            t->left = t->right = NULL;
            p->right=t;
            enqueue(t);
        }

    }while(isEmpty());
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

void Inoder(struct node *p)
{
    if (p)
    {
        Inoder(p->left);
        printf("%d ", p->data);
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
    printf("\nPreoder =\n");
    Preoder(root);
    printf("\nInoder =\n");
    Inoder(root);
    printf("\nPostoder =\n");
    Postoder(root);
}
