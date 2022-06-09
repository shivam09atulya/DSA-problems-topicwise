#include "stacks_string.h"
#include<string.h>

struct stack s1;

void isBalanced(char *a)
{
    int i;
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]=='{'||'(')
        {
            push(&s1,a[i]);
            printf("%c pushed \n",a[i]);
        }
        else if(a[i]=='}'||')')
        {
            printf("%c poped \n",pop(&s1));

        }

    }
    printf("%d",isEmpty(s1));
}

int main()
{
    char a[]="(a+b)";
    int i =0;
    while(i<strlen(a))
    {
        printf("%c\t",a[i]);
        i++;
    }
    printf("\n");
    isBalanced(a);
    return 0;
}