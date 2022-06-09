#include<stdio.h>
#include<stdlib.h>
struct queue
{
    int size;
    int head;
    int rear;
    int *p;
};
void enqueue(struct queue *q,int m);
dequeue();
void main()
{
    struct queue *q;
    int i,n,m;
    printf("Enter the size of array = \n");
    scanf("%d",&n);
    printf("Enter the data = \n");
    for (i=0;i<n;i++)
    {
    scanf("%d",&m);
    enqueue(q,m);    
    }
}
void enqueue(struct queue *q,int m)
{
    
}