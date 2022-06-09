//QUEUE USING LINKED LIST

#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
}*front=NULL,*rear=NULL,*head=NULL;
void delete(int m)
{   struct node *p=head,*q=head;
    if(head==NULL)
    return;
    if(m==0)
    {
        head=head->next;
        free(p);
    }
    else if(m>0)
    {
        while(m--)
        {   
            q=p;
            p=p->next;
        }
        q->next=p->next;
        free(p);
    }
}

/*int dequeue()
{   
    struct node *p=front;
    if(head==NULL)
    return -1;
    if(front==NULL)
    {
    front=head;
    p=front;
    front=front->next;
    
   }
    else
    {
        p->next=front->next;
        front=front->next;
        
    }
    return p->data;
}*/
int dequeue()
{
    struct node *p=front;

    if(head==NULL)
    {
        printf("\nQUEUE UNDERFLOW\n");
    return -1;
    }
    else
    {
        
        front=head;
        p=head;
        front=front->next;
        head=front;
        return p->data;
    }
    
}
void enqueue(int x)
{   struct node *t=NULL,*p=head;

    t = (struct node *)malloc(sizeof(struct node));
    t->data = x;
    t->next=NULL;
    if(t==NULL)
    {
        printf("\nQUEUE OVERFLOW\n");
    }
    if(rear==NULL)
    {
       front=rear=head=t;
    }

    else 
    {  
        rear->next=t;
        rear=t; 
       
    }
}

void display()
{
    struct node *p=head;
    while(p!=NULL)
    {
        printf(" %d ",p->data);
        p=p->next;
    }
    printf("\n");
}
void main()
{
    int i,m,x;
    printf("Enter the size of queue= \n");
    scanf("%d",&m);
    printf("Enter the elements = \n");
    for(i=0;i<m;i++)
    {
        scanf("%d",&x);
        enqueue(x);
    }
    display();
    printf("Value of head = %d\n",head->data);
    printf("Value of rear = %d\n", rear->data);
    printf(" %d \n",dequeue());
    printf(" %d \n", dequeue());
    printf(" %d \n", dequeue());
    printf("Value of rear = %d\n",rear->data);
    printf("Value of front = %d\n", front->data);
    enqueue(5);
   // printf("Enter the deletion point = \n");
   // scanf("%d",&m);
  //  delete(m-1);
    display();
    printf("Value of front = %d",front->data);
}