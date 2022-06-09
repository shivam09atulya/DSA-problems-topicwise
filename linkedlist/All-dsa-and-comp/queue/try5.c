#include<stdio.h>
#include<stdlib.h>
struct queue{
    int front;
    int rear;
    int size;
    int *p;
}*q;
void enqueue(int x)
{
    
    if(q->rear==-1)
    {   
        q->rear++;
        q->p[q->rear]=x;
    }
    else 
    {

    }

}
void main()
{
    int i;
    printf("Enter the size of the array = \n");
    scanf("%d",&q->size);
    q->front=q->rear=-1;
    q->p=(int*)malloc(q->size*sizeof(int));
    printf("Enter the values = \n");
    for(i=0;i<q->size;i++)
    {   scanf("%d",&x);
        enqueue(x);
    }   
}