/*
questions not done 6,10

*/
#include<stdio.h>
#include<stdlib.h>
void main()
{
  int *ptr,*p,i,n,x,y;
  printf("Enter the size of array = ");
  scanf("%d",&n);

  p=(int*)malloc(n*sizeof(int));
  ptr= p;
  int *t=p;
  for (i=0;i<n;i++)
  {
    printf("a[%d]= ",i);
    scanf("%d",p);
    p++;

  }
  
  printf("Your array \n");

  for(i=0;i<n;i++)
  {
    printf(" %d ",*ptr);
    ptr++;
  }
  printf("\n Enter the values of x and y = ");
  scanf("%d%d",&x,&y);
  p=t;
  int a,b;
  for (i=0;i<n;i++)
  {

    if (x==*p)
    {
      a=i;
    }
    if (y==*p)
    {
      b=i;
     break;
    }
    p++;
  }
printf("Minnimum difference between %d & %d is %d",x,y,abs(a-b));
}

