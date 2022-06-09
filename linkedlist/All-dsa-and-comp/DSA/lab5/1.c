//not able to complete 2 and 7(lets.c)


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
void fun(struct node *p,int n)
{   
    int i=0,k,m;
    struct node *q,*t;
    q=p;t=p;
    printf("Enter the value of k = ");
    scanf("%d",&k);
    for(i=0;i<n-k;i++)
    {
        q=q->next;

    }
    for(i=0;i<k;i++)
    {
        t=t->next;

    }
    m=q->data;
    q->data=t->data;
    t->data=m;
display(p);
}


void main()
{int a[]={1,2,3,4,5,6};
init(a,6);
display(first);
fun(first,6);

}