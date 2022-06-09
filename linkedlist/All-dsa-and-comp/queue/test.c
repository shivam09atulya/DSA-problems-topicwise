#include<stdio.h>
#include<stdlib.h>
struct queue
{
    int size;
    int first;
    int rear;
    int *p;
}*q;
void enqueue(int m);
void display();
void main()
{   int i, m;

    printf("Enter the size of queue= ");
    scanf("%d",&(q->size));
    q->first=q->rear=-1;
    q->p=(int *)malloc(q->size*sizeof(int));
    printf("Enter data = \n ");
    for(i=0;i<q->size;i++)
    {
        scanf("%d",&m);
        enqueue(m);
    }
    display();
}
void enqueue(int m)
{
    if((q->rear+1)%(q->size)==q->first)             //yaha p seg fault
    return;

    else
    {
        q->rear=(q->rear+1)%q->size;
        q->p[q->rear]=m;
    }
    
}
void display()
{
    int i;
    for(i=q->first+1;i<=q->rear;i++)
    {
        printf(" %d ",q->p[i]);
    }
    printf("\n");
}