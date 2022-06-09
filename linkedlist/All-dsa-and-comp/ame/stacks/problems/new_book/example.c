#include<stdio.h>
#include<stdlib.h>


struct node{
    int data;
    struct node *next;
};

void push(struct node *top,int data)
{
    struct node *temp=NULL;
    temp=(struct node*)malloc(sizeof(struct node));
        if(!temp)
        {
        printf("Heap Overflow!!!");
        return;
        }
        temp->data=data;
        temp->next=top;
        top=temp;
}

void display(struct node *s1)
{
    while(s1!=NULL)
    {
        printf(" %d ",s1->data);
        s1=s1->next;
    }
}


int main()
{
    struct node *top;
    push(top,1);
    push(top,2);
    push(top,3);
    push(top,4);
    push(top,5);
    display(top);
}