#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
}*first=NULL;
void init(int a[],int n)
{
    int i;
    struct node *last,*t;
    first=(struct node*)malloc(sizeof(struct node));
    first->next=NULL;
    first->data=a[0];
    last=first;
    
    for(i=1;i<n;i++)
    {
        t=(struct node*)malloc(sizeof(struct node));
        t->data=a[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }

}
void display(struct node*p)
{
    while(p!=0)
    {
        printf(" %d ",p->data);
        p=p->next;
    }
    printf("\n");
}

void main()
{int a[]={1,2,3,4,5,6};
init(a,6);
display(first);
}