#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct stack{
    int top;
    int size;
    char *s;
}s1;

void push(char m)
{

    if(s1.top==s1.size-1)
    {
        printf("Stack Overflow!!!");
        return;
    }
    s1.s[s1.top]=m;
    s1.top++;
}

void pop()
{
    if(s1.top==-1)
    {
        printf("Stack Underflow!!!");
        return;
    }
    else{
        char x=s1.s[s1.top];
        s1.top--;
        return x;
    }
}

int isEmpty()
{
    if(s1.top==-1)
    {
        return 1;
    }
    else if(s1.top!=-1)
    {
    return 0;
    }
}

void isBalanced(char *c)
{
    int i=0;
    for(i=0;c[i]!='\0';i++)
    {
    if(c[i]=='(')
    {
        push(c[i]);
    }
    else if(c[i]==')')
    {
        pop();
    }

    }
    if(isEmpty()==1)
    {
        printf("Balanced");
    }
    else if(isEmpty()!=1)
    {
        printf("Unbalanced");
    }

}

void main()
{
    char c[]="((a+b)*(a-b))";
    s1.s=(char*)malloc(strlen(c)*sizeof(char));
    isBalanced(&c);
}