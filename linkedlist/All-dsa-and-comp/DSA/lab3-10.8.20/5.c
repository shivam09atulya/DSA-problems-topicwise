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
{
    struct node *next=first->next,*prev=NULL,*cur=first;
    while(cur!=0)
    {
        if(prev==NULL)
        {
            cur->data=cur->data*next->data;
            

        }
        else if(next==NULL)
        {
            cur->data=cur->data*prev->data;
            return;
        }
        else
        {
            cur->data=(cur->data)*(prev->data)*(next->data);
        }
        prev=cur;
        cur=next;
        next=next->next;
        

    }
}

void main()
{
int n,*a,i;
printf("Enter the array size = ");
scanf("%d",&n);
a=(int*)malloc(sizeof(int));
for(i=0;i<n;i++)
{ drfgfcdxz`
    printf(" a[%d] = ",i+1);
    scanf("%d",&a[i]);
}
init(a,n);
display(first);
fun();
display(first);
}