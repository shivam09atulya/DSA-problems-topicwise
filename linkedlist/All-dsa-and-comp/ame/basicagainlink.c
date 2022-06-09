#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
}*top=NULL;


void push(int data)
{
    struct node *t=(struct node*)malloc(sizeof(struct node));
    if(t==NULL){
        printf("Stack Overflow!!!");
    return;
    }
    t->data=data;
    t->next=top;
    top=t;
        printf("Push (): %d \n",data);

    

}

void display(struct node *top)
{
    while(top!=NULL)
    {
        printf("%d\t",top->data);
        top=top->next;
    }
    printf("\n");
}

int pop()
{
printf("\nPop(): %d\n",top->data);
top=top->next;
}

int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    pop();
    display(top);
    return 0;
}