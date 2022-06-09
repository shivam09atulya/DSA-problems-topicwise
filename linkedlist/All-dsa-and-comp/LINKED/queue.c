#include<stdio.h>
#include<stdlib.h>
#define MAX 10

int q_arr[MAX];
int rear=-1;
int front=-1;

void insert(int data);
int isFull();
void display()
{
        int i;
        if ( isEmpty() )
        {
                printf("\nQueue is empty\n");
                return;
        }
        printf("\nQueue is :\n\n");
        for(i=front;i<=rear;i++)
                printf("%d  ",q_arr[i]);
        printf("\n\n");
}

void main()
 {
     int data,choice;
     printf("Enter data for insertion  = ");
     scanf("%d",&data);
     insert(data);
     display();
 }
 void insert(int data)
 {
     if (isFull())
     {
         printf("Queue Overflow ");
         return;
     }
     if (front== -1)
        front = 0;
    rear=rear+1;
    q_arr[rear]=data;

 }
int isFull()
{
        if( rear==MAX-1 )
                return 1;
        else
                return 0;
}
