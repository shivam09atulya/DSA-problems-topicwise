#include "stack.h"

int main()
{
  struct stack *s1;
  s1=createStack(20);
  char exp[20]="aabbXbbaaa";
  int i=0;
  while(exp[i]!='X')
  {
    push(s1,exp[i++]);
  }
  i++;
  int flag=1;
  while(exp[i]!='\0')
  {
    if(isEmpty(s1)||exp[i]!=pop(s1))
    {
      flag=0;
      break;
    }
    i++;
  }
  if(flag==1)
  printf("Palindrome!!!");
  else
  printf("Not Palindrome!!!");
  return 0;
}