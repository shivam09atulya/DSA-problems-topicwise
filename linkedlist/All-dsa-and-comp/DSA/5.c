#include<stdio.h>
#include<stdlib.h>
void main ()
{
  int *p,i,n;
  printf("Enter the size = ");
  scanf("%d",&n);
  p=(int*)malloc(sizeof(int)*n);
  for(i=0;i<n;i++)
  {
    printf("a[%d]= ",i);
    scanf("%d",&p[i]);
  }
  for(i=1;i<n-1;i++)
  {
    p[i]=p[i-1]*p[i+1];
  }
  for(i=0;i<n;i++)
  {printf(" %d ",p[i] );
  }
}
