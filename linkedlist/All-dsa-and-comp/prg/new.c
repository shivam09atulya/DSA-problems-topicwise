#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
}*first=NULL;
void init(int a[],int n)
{
    struct node *t,*last;
    int i;
    first=(struct node*)malloc(sizeof(struct node));
    first->data=a[0];
    first->next=NULL;
    last=first;               
    for(i=1;i<n;i++)
    {
        t=(struct node*)malloc(sizeof(struct node));
        t->data=a[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}

    void display(struct node *p)
    {
         while(p!=NULL)
        {printf("%d ",p->data);
         p=p->next;
        }
    }
    

void sum(struct node *p)
{
    int sum=0;
    while(p!=0)
    {
        sum+=p->data;
        p=p->next;

    }
    printf(" \nSUM of elements = %d \n",sum);
}
void search(struct node *p)
{
    int m=0,i=0;
    printf("\nEnter the value to be found=  \n");
    scanf("%d",&m);
    while(p!=0)
    {
        i++;
        if(p->data==m){
        printf("\n IT IS AT POSITION %d \n",i);
        }
        p=p->next;
    }
}
void delete(struct node *p)
{int n,x=0,i=0;
struct node *q=NULL;
    printf("\n place of deletion =  \n");
    scanf("%d",&n);
    if (n==1){
        q=p;
        p=p->next;
        free(p);
    
    }
    else if(n>1)
    {
        for (i=0;i<n-1 && p;i++)
        {
            q=p;
            p=p->next;
        }
        q->next=p->next;
        
    }
    else{
        printf("Wrong input");
    }
   

}

void main()
{
    int a[6]={1,2,3,4,5,6,};
    init(a,6);
    display(first);
    sum(first);
    search(first);
    delete(first);
    display(first);
    
}