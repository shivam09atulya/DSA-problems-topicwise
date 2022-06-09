#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
}*first=NULL;
void init(int a[],int n)
{struct node *last=NULL,*t;
int i;
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
void display(struct node*q)
{   struct node *t=q;
    while(t!=0)
    {
        printf(" %d ",t->data);
        t=t->next;
    }
    printf("\n");
}


void main()
{
int n,*a,i;
printf("Enter the array size = ");
scanf("%d",&n);
a=(int*)malloc(sizeof(int));
for(i=0;i<n;i++)
{
    printf(" a[%d] = ",i+1);
    scanf("%d",&a[i]);
}
init(a,n);
display(first);
}