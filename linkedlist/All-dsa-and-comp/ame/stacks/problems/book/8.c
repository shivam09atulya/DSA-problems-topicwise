#include<stdio.h>
#include<string.h>

void palin(char * exp)
{
    int flag,length=strlen(exp),i=0,j=length;
    while(exp[i]!='X')
    {
        if(exp[i]!=exp[j])
        {
            flag=1;
            break;
        }
        else
        {
            ++i;
            --j;
        }
    }
    if(flag==1)
    printf("Not Palindrome");
    else
    printf("Palindrome");
}

int main()
{
    char exp[50];
    printf("Enter the expression = \n");
    scanf("%s",&exp);
    palin(exp);
    return 0;
}