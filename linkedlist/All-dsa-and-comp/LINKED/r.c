#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
}*head=NULL;
void insert(int m,int n);
void display(struct node *p);
void delete(int n);
void main()
{   int m,n,i;
    printf("Enter the size of linked list = ");
    scanf("%d",&n);
    printf("Enter data = ");
    scanf("%d",&m);
    insert(m,0);
    for(i=0;i<n-1;i++)
    {
        scanf("%d",&m);
        insert(m,i);
    }
    display(head);
    printf("Enter the position to be deleted = ");
    scanf("%d",&n);
    delete(n);
    display(head);
    printf("Value of head = %d",head->data);
}
void insert(int m,int n)
{   int i;
    struct node *p=head,*t;
    t=(struct node*)malloc(sizeof(struct node));
    t->data=m;
    t->next=NULL;

if(n==0)
    {
        if (head==NULL)
        {
            head=t;
            t->next=head;
        }

        else
        {
        while(p->next!=head)
        {
            p=p->next;
        }
        p->next=t;
        t->next=head;
        }
    }
else if(n>0)
    {
        for(i=0;i<n;i++)
        { 
            p=p->next;
        }
        t->next=p->next;
        p->next=t;
    }
    else
    {
        return;
    }
    


}
void display(struct node *p)
{
    do{
        printf(" %d ",p->data);
        p=p->next;
    }while(p!=head);
}
void delete(int n)
{int i;
{   struct node *p=head,*tail;
    if(n==0)
    {
        if(head=NULL)
        return;
        else
        {
        while(p->next!=head)
        {
            p=p->next;
        }
        p->next=head->next;
        head=head->next;
        free(head);
        }
    }
    else if(n>0)
    {
        for(i=0;i<n-1;i++)
        {
            tail=p;
            p=p->next;
        }
        tail->next=p->next;
        free(p);
    }

}
}