//QUEUE USING ARRAY

#include<stdio.h>
#include<stdlib.h>
struct queue{
    int size;
    int front;
    int rear;
    int *p;
}q;

void enqueue(int x)
{
    if(q.rear==q.size-1)
    {
        printf("\nQUEUE OVERFLOW\n");
    return;
    }
    else
    {
        q.rear++;
        q.p[q.rear]=x;
    }
    
}
void display()
{
    int i;
    for (i=0;i<q.size;i++)
    {
        printf(" %d ",q.p[i]);
    }
}
int dequeue()
{
    if(q.rear==q.front)
    {
        printf("\nQUEUE UNDERFLOW\n");
    return -1;
    }
   
    else
    {   q.front++;
        return q.p[q.front];
    }    
}
void main ()
{
    int x,i;
    printf("Enter the size of array = ");
    scanf("%d",&(q.size));
    q.front=q.rear=-1;
    q.p=(int *)malloc(sizeof(int)*(q.size));
    printf("Enter the data = ");
    scanf("%d",&x);
    enqueue(x);
    for(i=0;i<q.size-1;i++)
    {
    scanf("%d",&x);
    enqueue(x);
    }
    display(q.size);
    printf("\n %d ",dequeue());
    printf("\n %d ", dequeue());
    printf("\n %d ", dequeue());
    enqueue(5);
    enqueue(7);
    printf("Value of rear is = %d\n",q.rear);
    printf("Value of front is = %d\n", q.front);
    printf("Value of size is = %d\n", q.size);
    for (i = 0; i < q.size; i++)
    {
        printf("Value in p[%d] = %d\n", i, q.p[i]);
   }
   display();
}