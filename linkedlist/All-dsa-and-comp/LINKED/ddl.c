#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *prev;
    struct node *next;
}*head;

void insert(int m,int n);
void display(struct node *p);
void delete(int n);
void main()
{
    int m,n,i;
    printf("Enter the size of the linked list = ");
    scanf("%d",&n);

printf("Enter data = \n");
scanf("%d",&m);
insert(m,0);
for(i=0;i<n-1;i++)
{
    scanf("%d",&m);
    insert(m,i);
   
}  
printf("Enter a node to be deleted = ");
scanf("%d",&n);
delete(n);
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
            head=t;
        }
        else
        {
        p->next=t;
        t->prev=head;
        }
        
    }
    else if(n>0)
    {
        for(i=0;i<n;i++)
        {
            p=p->next;
        }
        t->next=p->next;
        t->prev=p;
        p->next=t;
    }


}
void display(struct node *p){
    while(p->next!=NULL)
    {
        printf(" %d ",p->data);
        p=p->next;
    }

}
void delete(int n)
{
    struct node *p=head;
    int i;
    if(n==0)
    {
        if(head=NULL)
        return;

        else
        {
            head=head->next;
            free(p);
        }

        
    }
    else if(n>0)
    {
        for(i=0;i<n-1;i++)
        {
            p=p->next;
        }
        p->prev->next=p->next;
        

    }
}