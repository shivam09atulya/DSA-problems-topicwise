#include<stdio.h>
#include<stdlib.h>


struct node{
    int data;
    struct node *next;
}*head=NULL,*top=NULL;

void push(int data)
{
    if(head==NULL)
    {
        head=(struct node *)malloc(sizeof(struct node));
        head->data=data;
        head->next=NULL;
        top=head;
    }
    else{
        struct node *t=(struct node *)malloc(sizeof(struct node ));
        if(!t)
        return;
        t->data=data;
        t->next=top;
        top=t;
    }
}

void display()
{
    struct node *p=top;
    while(p!=NULL)
    {
        printf(" %d ",p->data);
        p=p->next;
    }
}

int pop()
{
    int current=top->data;
    struct node *cur=top;
    if(top==NULL)
    return -1;
    top=top->next;
    free(cur);
    return current;
}

int isEmpty()
{
return (top==NULL);
}

