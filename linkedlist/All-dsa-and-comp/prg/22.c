#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct data *next;
}*first=NULL;

void init(int a[],int n)
{
    int i;
    struct node *t,*last;
    first=(struct node*)malloc(sizeof(struct node));
    first->data=a[0];
    first->next=NULL;
    for(i=0;i<n;i++)
    {
        t=(struct node*)malloc(sizeof(struct node));
        t->next=NULL;
        t->data=a[i];
        last->next=t;
        last=t;
    }
}
void display(struct node *p)
{
    while(p!=NULL)
    {
        printf("%d",p->data);
        p=p->next;
    }
}
void main()
{
    int a[7]={1,2,3,4,5,6,7};
    init(a,7);
    display(first);
}