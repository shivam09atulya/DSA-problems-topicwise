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

/*void search(struct node *p)
{   int key,i;
struct node *q=NULL;
    printf("Enter the key to be found = ");
    scanf("%d",&key);
    while(p!=NULL)
    {
        if(key==p->data)
        {
            q->next=p->next;
            p->next=first;
            first=p;
            break;
        }
        else
        {   q=p;
            p=p->next;
        }
        
    }
}*/
void push(int data,int n)
{
    struct node *t,*q=NULL,*p=first;
    int i=0;
    t=(struct node *)malloc(sizeof(int));
    t->data=data;
    if(n==0)
    {
        t->next=first;
        first=t;
    
    }
    else if(n>0)
   for(i=0;i<n-1;i++)
   {
       p=p->next;
        q=p;
   }
   p->next=q->next;
   q->next=p;
    display(first);
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
push(1,2);
display(first);
}