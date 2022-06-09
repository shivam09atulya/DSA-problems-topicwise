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
void main()
{
    int n,i;
    printf("Enter the size of array = ");
    scanf("%d",&n);
    init(n);
    display();
    printf("\n Enter\n1.insert at beginning\n2.delete\n3.sort\n4.delete the duplicates \n");
    scanf("%d",&i);
    switch(i)
    {
    case 1:
    push();

    case 2:
    return;

    case 3:
    sort(n);

    case 4:
    dup(n);
    }
    display();
    
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
    printf(" \n Enter the data of the new node = ");
    scanf("%d",&(t->data));
    t->rnext=first;
    first=t;

}
void delete(int m)
{   int i;


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
    {a[i]=p->data;
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
{ int a[n],i,j,temp=0;
    struct node *p=first,*q=first;
   sort(n);
   for(i=0;i<n;i++)
   {
       for(j=i;j<n;j++)
       {
           if (p->data==q->data)
           {delete(j);
           }
           q=q->rnext;
       }
       p=p->rnext;
   }

  
}
