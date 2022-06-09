#include<string.h>
#include "stacks.h"

int isOperand(char  exp)
{
    if (exp == '+' || exp == '-' || exp == '/' || exp == '*' )
    return 0;
    else
    return 1;
}

int convert(char * exp)
{
    struct stack s1;
    s1.top=-1;
    s1.size=100;
    s1.s=(int *)malloc(sizeof(int));
    int i=0,result=0;
    while(exp[i]!='\0')
    {
        if(isOperand(exp[i]))
        {
            push(&s1,exp[i]-48);
            i++;
        }
        else{
            int m=pop(&s1);
            int n=pop(&s1);
            if(exp[i]=='+')
            result=n+m;
            else if (exp[i] == '-')
                result = n - m;
            else if (exp[i] == '/')
                result = n / m;
            else if (exp[i] == '*')
                result = n * m;
            push(&s1,result);
            i++;
        }

    }
    return pop(&s1);
}

int main()
{
    char  a[100];
    printf("Enter the postfix = ");
    scanf("%s",&a);
    int result=convert(a);
    printf("The result is  = %d",result);

}