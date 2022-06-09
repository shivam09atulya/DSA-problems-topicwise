#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
}*head=NULL,*top=NULL;

void push(int data)
{
    if(head==NULL)
    {
        head=(struct node*)malloc(sizeof(struct node));
        head->data=data;
        head->next=NULL;
        top=head;
    }
    else{
        struct node* t;
        t=(struct node*)malloc(sizeof(struct node));
        t->data=data;
        t->next=NULL;
        top->next=t;
        top=t;
        printf("Push() : %d\n",data);
    }

}

int pop()
{
    if(top==NULL)
    {
        printf("Stack Underflow");
        return -2;
    }
    else if(top==head)
    {
        printf("Stack Underflow");
      head=NULL;
      return -1;
    }

    else{
         struct node *p=head;
         while(p->next!=top)
         {
             p=p->next;
         }
         int m=top->data;
         printf("POP() ");
         free(top);
         top=p;
         top->next=NULL;
         return m;
    }
}

void display(struct node *p)
{
    while(p!=NULL)
    {
        printf("%d",p->data);
        p=p->next;
    }

}

int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    printf("%d\n",pop());
    printf("%d\n",pop());
    printf("%d\n",pop());
    printf("%d\n",pop());
    printf("%d\n",pop());
    display(head);
    return 0;
}
