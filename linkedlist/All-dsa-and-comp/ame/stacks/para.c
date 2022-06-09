#include "stacks_string.h"
#include<string.h>

int checkPlease(struct stack *s1,char exp)
{

    int m,n;
    m=up(s1);
    n=exp;
    if(n<42 && m<42)
    return pop(s1);
    else if(m==91 && n==93)
    return pop(s1);
    else if(m==123 && n==125)
    return pop(s1);
    else 
    return -1;

}


int isBalanced(char * exp)
{
    int m;
    char n;
    struct stack s2;
    s2.size=strlen(exp);
    s2.top=-1;
    s2.s=(char*)malloc(s2.size*sizeof(char));

for(int i=0;exp[i]!='\0';i++)
{
    if(exp[i]=='('|| exp[i]=='{' ||exp[i]=='[')
    push(&s2,exp[i]);
    else if(exp[i]==')' || exp[i]=='}'|| exp[i]==']')
    {
    m=checkPlease(&s2,exp[i]);

    }
}

if(m==-1)
{
    return 0;
}
else if(isEmpty(s2)==1)
return 1;
else
return 0;

}

int main()
{
    char exp[20];
    printf("Enter the expression = ");
    scanf("%s",&exp);
  int m= isBalanced(exp);
  if(m==1)
  {
      printf("Balanced");
  }
  else{
      printf("Unbalanced");
  }
}