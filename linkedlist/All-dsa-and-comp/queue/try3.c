#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
}*head=NULL;

void delete(int m)
{
    struct node *p=head,*q=head;
    if (head == NULL)
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

void insert(int x,int i)
{   struct node *t=NULL,*p=head;


    if(i==0)
    {
        t=(struct node *)malloc(sizeof(struct node ));
        t->data=x;
        t->next=NULL;
        head=t;
    }
    else if(i>0)
    {
        i--;
        while(i--)
        {
            p=p->next;
        }
        t=(struct node*)malloc(sizeof(struct node ));
        t->data=x;
        t->next=NULL;
        p->next=t;
        p=t;
    }
    else
    {
        return;
    }
    
    
}

void display(int n)
{
    int i;
    while(n!=0)
    {
        printf(" %d ",head->data);
        head=head->next;
        n--;
    }
    printf("Value of head = %d",head->data);
}

void main()
{
    int n,i,x,m;
    printf("Enter the size of linked list = \n");
    scanf("%d",&n);
    printf("Enter the numbers = \n");
    for(i=0;i<n;i++)
    {   
        scanf("%d",&x);
        insert(x,i);
    }
    display(n);
    printf("Enter the place of deletion = ");
    scanf("%d",&m);
     delete(m);
    display(n);
}



