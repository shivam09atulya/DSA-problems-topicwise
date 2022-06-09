#include<string.h>
#include "stacks.h"

void isbalanced(char c[])
{
    struct stack s1;
    s1.size=strlen(c);
    s1.top=-1;
    s1.s=(char*)malloc(s1.size*sizeof(char));
    int i=0;
    for(i;c[i]!='\0';i++)
    {
        if(c[i]=='{'||'['||'(')
        {
            push(&s1,c[i]);
        }
        else if(c[i]=='}'||']'||')')
        {
            pop(&s1);
        }
    }
    int m=isEmpty(s1);
    if(m==1)
    {
        printf("\nBalanced");
    }
    else if(m==0){
        printf("\nUnbalanced");
    }

}



void main()
{
    char c[]="({a+b}*[a-b])";
    int i=0;
    while(i!=strlen(c))
    {
        printf("%c",c[i]);
        i++;
    }
    isbalanced(c);
}