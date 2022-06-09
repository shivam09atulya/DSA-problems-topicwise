#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *rnext;
    struct node *lnext;
}*first=NULL;

void init(int n);
void display();
void push();
void delete();
void sort(int n);
void dup(int n);
void delete1(int n);
void main()
{
    int n,i,m=1;
    printf("Enter the size of array = ");
    scanf("%d",&n);
    init(n);
    display();
    
    while(m!=0)
    {
        
    printf("\nEnter\n1.insert at beginning\n2.delete\n3.sort\n4.delete the duplicates \n");
    scanf("%d",&i);
    
    switch (i)
    {
    case 1:
    push();
    break;

    case 2:
    delete();
    break;

    case 3:
    sort(n);
    break;

    case 4:
    dup(n);
    break;

    default:
    printf("\nEnter a valid one\n");
        break;
    }
    display();
    printf("\nEnter 0 to terminate or anyother to continue = \n");
    scanf("%d",&m);
    }
   
    
}
void init(int n)
{   int i;
    struct node *last,*t;
    first=(struct node*)malloc(sizeof(struct node));
    first->rnext=NULL;
    printf("Enter the elements =  ");
    scanf("%d",&(first->data));
    last=first;
    for(i=0;i<n-1;i++){
        t=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&(t->data));
        t->rnext=NULL;
        last->rnext=t;
        last=t;
    }
}
void display()
{
    struct node *p=first;
    while(p!=NULL)
    {
        printf(" %d ",p->data);
        p=p->rnext;

    }
    printf("\n");
}
void push()
{
    struct node *p=first,*t;
    t=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter the data of the new node = ");
    scanf("%d",&(t->data));
    t->rnext=first;
    first=t;
}

void delete()
{   int i,m;
printf("\nEnter the address of the node to be deleted = ");
scanf("%d",&m);

    struct node *p=first,*q=first;
    if(m==0)
    {   
        first=first->rnext;
        free(p);

    }
    else if(m>0)
    {
        for(i=0;i<m;i++)
    {   q=p;
        p=p->rnext;

    }
    q->rnext=p->rnext;
    free(p);
   

    }
}
void sort(int n)
{   int a[n],i,j,temp=0;
    struct node *p=first;
    for(i=0;i<n;i++)
    {
    a[i]=p->data;
    p=p->rnext;
    }
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if(a[i]<a[j]){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            }
        }
    }
    
    p=first;
    for(i=0;i<n;i++)
    {
        p->data=a[i];
        p=p->rnext;
    }
}
void dup(int n)
{   struct node *p=first,*q=first;
int a[n],i,j;
    sort(n);

     for(i=0;i<n;i++)
    {
    a[i]=p->data;
    p=p->rnext;
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            a[j]='m';

        }
    }
    p=first;
    for(i=0;i<n;i++)
    {
        p->data=a[i];
        p=p->rnext;
    }
}
void delete1(int n)
{   int i;
    struct node *p=first,*q=first;
    if(p->data=='m')
    {
        for(i=0;i<n;i++)
    {   q=p;
        p=p->rnext;

    }
    q->rnext=p->rnext;
    free(p);
   

    }
}