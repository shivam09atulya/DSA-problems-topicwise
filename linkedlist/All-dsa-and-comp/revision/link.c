#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
}*head=NULL;

void insert()
{
    struct node *last=NULL;
    int data;
    printf("Enter data = \n");
    scanf("%d",&data);
    if(head==NULL)
    {
    head=(struct node*)malloc(sizeof(struct node));
    head->data=data;
    head->next=NULL;
    last=head;
    }
    else
    {
    struct node *t;
    t=(struct node*)malloc(sizeof(struct node));
    t->data=data;
    t->next=NULL;
    last->next=t;
    t=last;
    }
}

void display(struct node *head)
{
    while(head->next)
    {
        printf("%d \n",head->data);
        head=head->next;
    }
}
void main()
{
    int i=5;
    while(i){
    insert();
    i--;
    }
    display(head);
}