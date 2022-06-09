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
}
void find(struct node *p)
{   int n,i=0;
printf(" \n Enter the number to find = ");
scanf("%d",&n);
    while(p!=0)
    {   i++;
    p=p->next;
        if(p->data==n)
        {printf(" \n AT POSITION = %d",i+1);

        }
        
    }
}
void delete(struct node *p)
{   struct node *t=NULL;
int n,i=0;
printf("\n Enter the no to be deleted = ");
scanf("%d",n);
   
  
    if(n==1)
    {
       t=p; 
        p=p->next;
        free(t);
    }
    else if(n>1)
    { 
        for (i=0;i<n-1;i++)
        {
        t=p;
        p=p->next;       
        if(p->data==n)
        {
            t->next=p->next;
            free(p);
        }
        }
    }



}

void main()
{
    int a[]={1,2,3,4,5,6};
    init(a,6);
    display(first);
    find(first);
    delete(first);
    display(first);

}
