#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
}*first=NULL;

void init(int n);
void display(struct node *p);
void insert();

void main()
{   int n;
    printf("Enter the size of linked list = \n");
    scanf("%d",&n);
    init(n);
   // display(first);
    insert();
    display(first);
    printf("Address = %d and data = %d",first,first->data);
}
void init(int n)
{   int i;
    struct node *t,*last,*p=first;
    first=(struct node*)malloc(sizeof(struct node));
    first->next=NULL;
    last=first;
    printf("Enter the linked list = \n");
    scanf("%d",&(first->data));
    for (i=1;i<n;i++)
    {
        t=(struct node*)malloc(sizeof(struct node));
        last->next=t;
        last=t;
        t->next=first;
        scanf("%d",&(t->data));

    }
    
}
void display(struct node *p)
{
    do 
    {
        printf(" %d ",p->data);
        p=p->next;
    }while(p!=first);
}
void insert()
{
    int m,data,i;
    struct node *t,*p=first;
    printf("\nEnter the data and the address to put it = \n");
    scanf("%d%d",&data,&m);
    t=(struct node*)malloc(sizeof(struct node));
    t->data=data;
    t->next=NULL;
    if(m==0)
    {
        if (first==NULL)
        {
            first=t;
            t->next=first;
        }
        else
        {
        while(p->next!=first)
        {
            p=p->next;
        }
        p->next=t;
        t->next=first;
        first=t;
        }
    }
    else if(m>0)
    {
        for(i=0;i<m-1;i++)
        { 
            p=p->next;
        }
        t->next=p->next;
        p->next=t;
    }

}