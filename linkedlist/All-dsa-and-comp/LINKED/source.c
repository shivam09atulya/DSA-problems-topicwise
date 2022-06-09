#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
}*first=NULL;
void init();
void display();
void push(int data,int n);

void main()
{
    init(first);
    display(first);
    push(3,2);
    display(first);
}
void init()
{
    int n,i;
    struct node *t,*last=NULL;
   
    printf("Enter the size of the array = ");
    scanf("%d",&n);
    printf("Enter the elements : \n");
    first=(struct node*)malloc(sizeof(struct node));
    first->next=NULL;
     scanf("%d",&(first->data));
    last=first;

    for(i=0;i<n-1;i++)
    {
        t=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&(t->data));
        t->next=NULL;
        last->next=t;
        last=t;

    }

}
void display()
{
    printf("\n");
    struct node *p=first;
    while(p!=0)
    {
        printf("\t%d\t",p->data);
        p=p->next;
    }
}

void push(int data,int n)
{   int i;
    struct node *p=first,*q,*t=(struct node*)malloc(sizeof(struct node));
    t->data=data;
    t->next=NULL;
    if(n==0)
    {
        t->next=p;
        p=t;
    }
    else if(n>0)
    {
        for(i=0;i<n;i++)
        {
            q=p;
            p=p->next;

        }
        q->next=t;
        t->next=p;
    }
}