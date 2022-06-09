#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
}*head=NULL,*rear=NULL,*first=NULL;
void enqueue(int m)
{
    struct node *t;
    t=(struct node*)malloc(sizeof(struct node));
    if(t==NULL)
    {
    printf("Queue is full \n");
    return;
    }
    else
    {
        t->data=m;
        t->next=NULL;
        if(head==NULL)
        {   
            first=head=rear=t;
        }
        rear->next=t;
        rear=t;
    }
    
}
void display()
{
    struct node *p=head;
    while(p)
    {
        printf(" %d ",p->data);
        p=p->next;
    }
    printf("\n");
}
void dequeue()
{   struct node *t;
    if(head==NULL){

    printf("Queue is empty ");
    return;
    }
    else
    {
        t=head;
        head=head->next;
        free(t);
    }
    
}
void peek()
{
    printf("\nFirst value is =  %d \n",head->data);
}
void main()
{
    int i,m,n;
    printf("Enter the size = ");
    scanf("%d",&n);
    printf("Enter the data = ");
    for (i=0;i<n;i++){
        scanf("%d",&m);
    enqueue(m);
    }
    
    display();
    dequeue();
    dequeue();
    enqueue(6);
    enqueue(7);
    display();
    peek();
    display();
}