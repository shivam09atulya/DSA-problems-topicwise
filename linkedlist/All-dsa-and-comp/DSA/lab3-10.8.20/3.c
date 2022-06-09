#include<stdio.h>
#include<stdlib.h>
void main()
{
  int *p,n,i,j,t;
  printf("Enter teh size of array = ");
  scanf("%d",&n);
p=(int*)malloc(sizeof(int )*n);
for(i=0;i<n;i++)
{
  printf("A[%d]= ",i);
  scanf("%d",&p[i]);
}
  for(i=0;i<n;i++)
  {
    for(j=i;j<n;j++)
    {
      while(p[j]%2==0)
      {
        t=p[i];
        p[i]=p[j];
       p[j]=t;
        break;
      }
    }
  }
  for (i=0;i<n;i++)
  printf(" %d ",p[i]);

}