#include "stack_string.h"

int checkPlease(struct stack * s1,char exp)
{
    char m,n;
    m=top(s1);
    n=exp;
    if(n=='}' && m=='{')
    return pop(s1);
    else if (n == ')' && m == '(')
        return pop(s1);
    else if (n == ']' && m == '[')
        return pop(s1);
}

void convert(char *exp)
{
int i;
char check;
struct stack s1;
s1.size=strlen(exp);
s1.top=-1;
s1.s=(char*)malloc(s1.size*sizeof(char));
for(i=0;exp[i]!='\0';i++)
{
    char track;
    if(exp[i]=='{'||exp[i]=='('||exp[i]=='[')
    {
    push(&s1,exp[i]);
    
    }
    else if(exp[i]=='}'||exp[i]==')'||exp[i]==']')
    {
        check=checkPlease(&s1,exp[i]);
    }
}
if(isEmpty(s1))
printf("Balanced");
else
{
printf("Not Balanced\n");
while(s1.top!=-1)
{
    char temp;
    temp=pop(&s1);
    if(temp=='{')
    printf("Have a } to make the expression balanced  \n");
    else if (temp == '(')
        printf("Have a ) to make the expression balanced  \n");
    else if (temp == '[')
        printf("Have a ] to make the expression balanced  \n");
}
}
}


int main()
{
    char exp[100];
    printf("Enter the expression = \n");
    scanf("%s",&exp);
    convert(exp);
    return 0;
}