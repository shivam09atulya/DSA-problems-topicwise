#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node
{
    char data;
    struct node *next;
} *head = NULL, *last = NULL;

void create(char *exp)
{

    int length = strlen(exp), i = 0;
    struct node *t;
    while (length--)
    {
        if (head == NULL)
        {
            head = (struct node *)malloc(sizeof(struct node));
            head->data = exp[i];
            head->next = NULL;
            last = head;
        }
        else
        {
            t = (struct node *)malloc(sizeof(struct node));
            t->data = exp[i];
            t->next = NULL;
            last->next = t;
            last = t;
        }
        i++;
    }
}

void display()
{
    struct node *p = head;
    while (p != NULL)
    {
        printf("%c  ", p->data);
        p = p->next;
    }
}

void reverse(struct node *start)
{
    struct node *right=start->next;
    struct node *prev=start,*cur=right,*next=start;
    while(cur!=NULL)
    {
        next=cur->next;
        cur->next=prev;
        prev=cur;
        cur=next;
    }
}

void palin(char * exp)
{

    struct node *point=head;
    while(point->data!='X')
    {
        point=point->next;
    }
    struct node *last=head;
    while(last->next!=NULL)
    {
        last=last->next;
    }
    reverse(point);
    struct node *first=head;
    int count=0;
    while(first!=last)
    {
        if(first->data!=last->data)
        {
            count++;
            break;
        }
        first=first->next;
        last=last->next;
    }

    if(count==0)
    printf("\nPalindrome");
    else    
    printf("\nNot Palindrome");
}


int main()
{
    char exp[50];
    printf("Enter the expression = \n");
    scanf("%s",&exp);
    create(exp);
    display();
    palin(exp);
    return 0;
}