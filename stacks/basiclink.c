#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
}*top=NULL;

void push(int data)
{
 
     struct node *t = (struct node *)malloc(sizeof(struct node));
     if(t==NULL)
     return;
     t->data = data;
     t->next = top;
     top = t;
 
}

void display(struct node *top)
{

    while(top!=NULL)
    {
        printf(" %d ",top->data);
       top= top->next;
    }
}

void pop()
{
    printf("\nPop(): %d",top->data);
    top=top->next;
}

void main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    display(top);  // forget->Good thing to notice if there is a global variable passed as a local variable by call by value then there be no changes
                    //forget->in global variable both of them will be different variables
                    //remember->Also it is not call by address but call by value 
    pop();
    pop();
    pop();
}