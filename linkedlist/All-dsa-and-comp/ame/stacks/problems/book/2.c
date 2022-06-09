#include "stack_string.h"
#include <string.h>

int isOperand(char x)
{
    if (x == '+' || x == '-' || x == '/' || x == '*')
        return 0;
    else
        return 1;
}

int preced(char x)
{
    if (x == '+' || x == '-')
        return 1;
    else if (x == '*' || x == '/')
        return 2;
    else
        return 0;
}

char *convert(char *infix)
{

    struct stack s1;
    s1.top = -1;
    s1.size = 20;
    s1.s = (char *)malloc(strlen(infix) * sizeof(char));
    char *postfix;
    postfix = (char *)malloc(strlen(infix) * sizeof(char));

    int i = 0, j = 0;
    while (infix[i] != '\0')
    {
        if (isOperand(infix[i]))                                                     
            postfix[j++] = infix[i++];

        else
        {
            if (preced(infix[i]) > preced(top(s1)))
            {
                
                push(&s1, infix[i++]);
            }
            else
            {
                postfix[j++] = pop(&s1);
            }
        }
    }

    while (!isEmpty(s1))
    {
        postfix[j++] = pop(&s1);
    }
    postfix[j] = '\0';
    return postfix;
}

int main()
{
    int i = 0;
    char p[100];
    printf("Enter the string = ");
    scanf("%s", &p);
    char *a = convert(p);
    printf("Postfix is = \n");
    while (a[i] != '\0')
    {
        printf("%c", a[i]);
        i++;
    }
    return 0;
}