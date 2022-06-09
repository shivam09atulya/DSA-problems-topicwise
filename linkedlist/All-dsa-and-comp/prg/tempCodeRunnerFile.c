#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
}*first=NULL,*last;

void init(int a[],int n)
{
    int i;
    struct node *t;
    first=(struct node*)malloc(sizeof(struct node));
    first->data=a[0];
    first->next=NULL;
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
void display(struct node *p){
    while(p!=0)
    {
        printf(" %d \n",p->data);
        p=p->next;
    }
    
}
void find(struct node *p)
{int n,i;
printf("Enter the number to find = ");
scanf("%d",&n);
while(p!=0)
{   i++;
    if(p->data==n)
    {
        printf("Your number is at position = %d",i);
        
    }
    p=p->next;
    
}

}
void delete(struct node *p)
{
    int i=0,n;
    struct node *t=NULL;
    printf("\nEnter the number to be deleted = ");
    scanf("%d",&n);
    while(p!=0)
    {
        if(n==1)
        {
            t=p;
            p=p->next;
            free(t);
        }
        else if(n>1)
        {
            if(p->data==n)
            for(i=0;i<n-1;i++)
            {
                t=p;
                p=p->next;
            }
            t->next=p->next;
        }
    }
}
void main()
{
    int a[7]={1,2,3,4,5,6,7};
    init(a,7);
    display(first);
    find(first);
    delete(first);
    display(first);

}