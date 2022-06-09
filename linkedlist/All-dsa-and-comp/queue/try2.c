#include<stdio.h>
#include<stdlib.h>
struct queue{
    int first;
    int rear;
    int size;
    int *p;
}*q;
void enqueue(int x,int n)
{
    if(q->rear==q->size-1)
    return;

    else 
    {
        q->rear++;
        q->p[q->rear]=x;
    }
}
void display(int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf(" %d ",q->p[i]);
    }
    printf("\n");
}
int dequeue(int n)
{
  int x;
    if(q->first==q->rear)
    return -1;
    else
    {
    }
    return x;
}
void main()
{
    int n,i,x;
    q->rear=q->first=-1;
    printf("Enter the size = ");
    scanf("%d",&n);
    q->size=n;
    q->p=(int* )malloc(n*sizeof(int));
    printf("Enter the values = ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        enqueue(x,n);
    }
    display(n);
   x= dequeue(n);
   display(n);
}