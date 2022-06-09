#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct stack{
struct node *top;
};

struct stack *create()
{
    struct stack *s1=(struct stack *)malloc(sizeof(struct stack ));
    if(!s1)
    return NULL;
    s1->top=NULL;
    return s1;
}

void push(struct stack *s1,int data)
{
    struct node *temp=NULL;
    temp=(struct node *)malloc(sizeof(struct node));
    if(!temp)
    {
    printf("Heap Overflow!!!\n");
    return ;
    }
    temp->data=data;
    temp->next=s1->top;
    s1->top=temp;
}

int isEmpty(struct stack *s1)
{
    return (s1->top==NULL);
}
int pop(struct stack *s1)
{
    if(isEmpty(s1))
    {
        printf("Stack Underflow!!!\n");
        return -1;
    }
    struct node *temp;
    int pop_data;
    temp=s1->top;
    pop_data=s1->top->data;
    s1->top=s1->top->next;
    free(temp);
    return pop_data;
}


void display(struct stack *s1)
{
    struct node *p=s1->top;
    while(p!=NULL)
    {
        printf(" %d ",p->data);
        p=p->next;
    }
}