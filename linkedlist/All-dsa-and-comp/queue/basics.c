#include<stdio.h>
#include<stdlib.h>
struct queue{
    int size;
    int first;
    int rear;
    int *p;
};
void enqueue(struct queue *q, int n);
void display(struct queue*q,int n);
void dequeue(struct queue *q);
void peek(struct queue *q);
void main()
{   int i,n;
    struct queue *q;
    printf("Enter the size of queue = ");
    scanf("%d",&(q->size));
    printf("Enter data = \n");
    q->rear=q->first=-1;
    q->p=(int *)malloc((q->size)*sizeof(int));
    for(i=0;i<(q->size);i++)
    {
        scanf("%d",&n);
        enqueue(q,n);
    }
    display(q,q->size);
    dequeue(q);
    display(q,q->size);
    peek(q);
}
void enqueue(struct queue *q,int n)
{
    if(q->rear==q->size-1)
    {
    printf("Queue is full \n");
    return;
    }
    else
    {
        q->rear++;
        q->p[q->rear]=n;
    }
    
}
void display(struct queue *q,int n)
{
    int i;
    for(i=q->first+1;i<=q->rear;i++)
    {
        printf(" %d ",q->p[i]);
    }
    printf("\n");

}
void dequeue(struct queue *q)
{
    if(q->first==q->rear){
        printf("Queue is empty \n");
    return;
    }

    else
    q->first++;
    
}
void peek(struct queue *q)
{
    if(q->first==q->rear)
    {
        printf("Queue is empty = ");
        return;
    }
    else
    printf("First node is = %d ",q->p[q->first]);
}