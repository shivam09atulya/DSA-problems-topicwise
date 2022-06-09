#include<stdio.h>
#include<stdlib.h>
struct queue{
    int size;
    int front;
    int rear;
    int *p;

}head,q;
void enqueue(int x)
{
    if((q.rear+1)%q.size==q.front)
    printf("Queue overflow\n");
    else
    {
        q.rear=(q.rear+1)%q.size;
        printf("\nEntered = %d\n",x);
        q.p[q.rear]=x;
    }
}
void display()
{
    int i=q.front+1;
    do{
       printf(" %d ",q.p[i]);
       i=(i+1)%q.size;
    }while(i!=(q.front+1)%q.size);
    printf("\n");
}
int dequeue()
{   if(q.rear==q.front)
    {
        printf("Queue is underflow\n");
        return -1;
    }
    q.front++;
    return q.p[q.front];
}
void main()
{int i,x;   

    printf("Enter the size of circular = \n");
    scanf("%d",&(q.size));
    q.front=q.rear=-1;
    printf("Size of queue =%d\n ",q.size);
    q.p=(int*)malloc(q.size*sizeof(int));
    printf("Enter the data = \n");
    for(i=0;i<q.size;i++)
    {
    scanf("%d",&x);
    enqueue(x);
    }
    display();
  
    printf(" %d ", dequeue());
    printf(" %d ", dequeue());
    printf(" %d ", dequeue());
    printf(" %d ", dequeue());
    printf(" %d ", dequeue());
    enqueue(7);
    enqueue(8);
    enqueue(9);
    enqueue(10);
    enqueue(11);
    enqueue(12);
    display();
}