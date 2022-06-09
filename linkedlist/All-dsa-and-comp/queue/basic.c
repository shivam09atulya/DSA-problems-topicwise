#include<stdio.h>
#include<stdlib.h>
struct queue{
    int size;
    int first;
    int rear;
    int *p;
};
void enqueue(struct queue q,int x)
{
    if(q.rear==q.size-1)
    return;
    else
    {q.rear++;
    q.p[q.rear]=x;
    }
}
void display(struct queue q,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf(" %d ",q.p[i]);
    }


}
void main()    
{int x;
struct queue q;
printf("Enter the size of array = ");
scanf("%d",&(q.size));
q.first=q.rear=-1;
q.p=(int*)malloc((sizeof(int))*(q.size));
printf("Enter the data =  ");
scanf("%d",&x);
enqueue(q,x);
display(q,q.size);
}

void enqueue(struct queue *q,int x)
{
    if(q->rear==q->size-1)
    return;
    else
    {
    q->rear++;
    q->p[q->rear]=x;
    }
}
void display(struct queue *q,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf(" %d ",q->p[i]);
    }

}
void dequeue(struct queue *q)
{
    int x=-1;
 if(q->rear==q->first)
 return;
 else
 {
     q->first++;
     x=q->p[q->first];
 }

}
void main()
{int x,i;
struct queue *q;
printf("Enter the size of array = ");
scanf("%d",&(q->size));
q->first=q->rear=-1;
q->p=(int*)malloc((sizeof(int))*(q->size));
printf("Enter the data =  ");
for(i=0;i<q->size;i++)
{
    scanf("%d",&x);
    enqueue(q,x);
}
display(q,q->size);
dequeue(q);
display(q,q->size);
}
