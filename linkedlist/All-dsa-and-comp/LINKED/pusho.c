#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
}*first=NULL,*last=NULL;
void lastpush(int m)
{   
    struct node *t;
    t=(struct node*)malloc(sizeof(struct node));
    t->data=m;
    t->next=NULL;
    if(first==NULL)
    {
        first=last=t;
    }
    else
    {
        last->next=t;
        last=t;
    }
    

}
void insert(int m,int n)
{   struct node *t,*p=first,*q;
int i;
t=(struct node*)malloc(sizeof(struct node));
t->data=m;
t->next=NULL;
    if(n==0)
    {
        first=t;
    }
    else if(n>0)
    {
        for(i=0;i<n-1;i++)
        {
            q=p;
            p=p->next;

        }
        q->next=t;
        t->next=p;
    }
}
void display(struct node *p)
{
    while(p!=NULL)
    {
        printf(" %d ",p->data);
        p=p->next;
    }
}
void main()
{  
    lastpush(1);
    lastpush(2);
    lastpush(3);
    lastpush(4);
    lastpush(5);
    lastpush(6);
    insert(1,5);
    display(first);
}