#include<stdio.h>

struct queue{
    int size;
    int top;
    int rear;
    int *array;
}

void create(struct queue *q,int capacity)
{
    q=(struct queue*)malloc(sizeof(struct queue));
    if(!q)
    return;
    q->size=capacity;
    q->rear=q->top=-1;
    q->array=(int*)malloc(q->size*sizeof(int));
    if(!q->array)
    return;
}

void enqueue(struct queue *q,int data)
{
    if(q->rear==q->size-1)
    {
        printf("Queue Full!!!\n");
        return;
    }
    else{
        q->array[++q->rear]=data;
    }
}

int dequeue(struct queue *q)
{
    if(q->rear==q->top)
    {
        printf("Queue Overflow!!!\n");
        return -1;
    }
    else
    {
        return q->array[q->top++];
    }
}