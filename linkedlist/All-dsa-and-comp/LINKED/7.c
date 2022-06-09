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
void fun()
{   int temp=0;
    struct node *cur=first,*p=first;
while(cur!=0)
{p=cur;
  while(p!=0)
  {
      if(p->data<cur->data)
      {
          temp=cur->data;
          cur->data=p->data;
          p->data=temp;
          p=cur;
          p=p->next;
      }
      else
      {
          p=p->next;
      }
      

  }
  cur=cur->next;
}
}
void kfun(int n)
{
    int k,i;
    printf("Enter the value of k = ");
    scanf("%d",&k);
    struct node *p=first;
    for(i=0;i<k;i++)
    {p=p->next;

    }
    printf("LArgest kth element = %d ",p->data);
    p=first;
    for(i=0;i<n-k;i++)
    {
        p=p->next;
    }
    printf("Smallest kth element = %d ",p->data);
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
fun();
kfun(n);
display(first);
}