#include<stdio.h>
#include<stdlib.h>

struct queue
{
    int size;
    int first;
    int rear;
    int *p;
};

void enqueue(struct queue *q,int m);
void dequeue(struct queue *q);
void display(struct queue *q);
void main()
{   int i, m;
struct queue *q;
    printf("Enter the size of queue= ");
    scanf("%d",&(q->size));
    q->first=q->rear=-1;
    q->p=(int *)malloc(q->size*sizeof(int));
    printf("Enter data = \n ");
    for(i=0;i<q->size;i++)
    {
        scanf("%d",&m);
        enqueue(q,m);
    }
   dequeue(q);
   enqueue(q,7);
    display(q);
}
void enqueue(struct queue *q,int m)
{
    if((q->rear+1)%q->size==q->first)
    {
        printf("Queue is full \n");
        
    return;
    }

    else
    {   q->rear=(q->rear+1)%q->size;
        q->p[q->rear]=m;
        
    }
    
}
void dequeue(struct queue *q)
{
    if(q->first==q->rear)
    {
        printf("Queue is empty \n");
    return;
}
    else
    {
        
        q->first=(q->first+1)%q->size;
        
    }
    
}
void display(struct queue *q)
{
    int i=q->first+1;
    do{
        printf(" %d ",q->p[i]);
        i=(i+1)%q->size;

    }while(i!=(q->rear+1)%q->size);
    
    printf("\n");
}