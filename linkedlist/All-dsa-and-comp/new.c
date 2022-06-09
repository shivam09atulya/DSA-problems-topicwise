#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
}*first=NULL;
void init(int n);
void display();
void push(int data,int n);
void fun(int n);
void delete(int ,int m);

void main()
{   int n;
    printf("Enter the size of the array = ");
    scanf("%d",&n);
    init(n);
    display();
    //push(1,0);
    fun(n);
    display();
}
void init(int n)
{
    int i;
    struct node *t,*last=NULL;
   
    
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
        t->next=first;
        first=t;
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
void fun(int n)
{   struct node *p=first;
    int m,i,j;
    printf(" \n Enter the value of m = ");
    scanf("%d",&m);
    for(i=0;i<m;i++)
    p=p->next;

    for(i=m,j=0;i<n;i++,j++)
    {
        push(p->data,j);
        p=p->next;
    }
delete(n,m);

}
void delete(int n,int m)
{
    int i;
    struct node *p=first;
    if ((n-m)==0 || (n-m)<0)
    return;

    else
    {
        for (i=0;i<m+(n-m)-1;i++)
        {
            p=p->next;
        }
        
        p->next=NULL;


    }
}