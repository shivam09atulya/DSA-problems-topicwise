#include "stack.h"

struct node {
    char data;
    struct node *next;
}*last=NULL ;

void create(struct node *head,char *exp)
{
    int length=strlen(exp),i=0;
    while(length--)
    {
    if(head)
    {
        struct node *t;
        t->data=exp[0];
        t->next=NULL;
        head=t;
        last=t;
    }

    else{
        struct node *t;
        t->data=exp[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
    i++;
 }
}

void display(struct node *p)
{

    while(p->next!=NULL)
    {
        printf("%d \t",p->data);
        p=p->next;
    }

}


int main(){
    struct node *head;
    char exp[50];
    printf("Enter the expression =  \n");
    scanf("%s",&exp);
    create(head,exp);
    display(head);
    return 0;
}