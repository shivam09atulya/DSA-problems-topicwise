#include<stdio.h>
#include<stdlib.h>
int fun(int a[],int n)
{
int i,j,t=0;
for (i=0;i<n;i++)
{
    printf("A[%d] = ",i);
    scanf("%d",&a[i]);
}
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            if(a[i]<a[j])
            t=a[i];
            a[i]=a[j];
            a[j]=t;

        }
    }
    for(i=0;i<n;i++)
    {
    printf(" %d ",a[i]);
    }
    return 0;
}

void main()
{
  int i,n,*p;
  printf("Enter the size of array = ");
  scanf("%d",&n);

  p=(int *)malloc(n*sizeof(int));
  fun(p,n);
   
  
  

 
}