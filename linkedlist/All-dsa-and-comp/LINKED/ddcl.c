#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
    struct node *prev;
}*head=NULL;
void insert(int m,int n);
void display(struct node *p);
void main()
{
    int i,m,n;
    printf("Enter the size of linked list = ");
    scanf("%d",&n);
    printf("Enter data = ");
    for(i=0;i<n-1;i++)
    {   scanf("%d",&m);
        insert(m,i);
    
    }
    display(head);

}
void insert(int m,int n)
{   int i;
    struct node *p=head,*t;
    t=(struct node*)malloc(sizeof(struct node));
    t->data=m;
    t->next=NULL;
    t->prev=NULL;
    if(n==0)
    {
        if(head==NULL)
        {
            t->prev=t->next=t;
            head=t;
        }
        else{
            head->prev->next=t;
            t->next=head;
            head->prev=t;
            t->next=head;
        }
    }
    else if(n>0)
    {  
        for(i=0;i<n-1;i++)
        {p=p->next;
        }
        p->next->prev=t;
        t->next=p->next;
        p->prev->next=t;
        t->prev=p->prev;
    }
    
    
}
void display(struct node *p)
{
    do{
        printf(" %d ",p->data);
        p=p->next;
    }while(p!=head);
}