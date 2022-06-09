#include<stdio.h>
#include<stdlib.h>
struct Node {
  int data;
  struct Node *next;
}*head=NULL;

void deleteNode(struct Node *n)
{
    struct Node *p=head,*q=NULL;
    while(p->data==n->data)
    {   q=p;
        p=p->next;
    }

q->next=p->next;
free(p);
}
void display()
{
    struct Node *p=head;
    while(p!=NULL)
    {printf("%d",p->data);
    }
}


void main()
{int w;
struct Node *n;
printf("Enter no of time execution = ");
scanf("%d",&w);
    while(w--){
    printf("Enter the node to be deleted = \n");
    scanf("%d",&n->data);
    deleteNode(n);
    display();
    }
}