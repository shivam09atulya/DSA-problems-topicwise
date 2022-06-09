#include<stdio.h>
#include<stdlib.h>
void last(int a[],int n)
{int i;
for(i=0;i<n;i++)
{
  printf(" %d ",a[i]);
}

for(i=n-2;i>=0;i--)
{
while(a[i]!=a[n-1])
{
  printf("Second largest number = %d ",a[i]);
  goto hello;
}
}

hello:
for(i=0;i<n;i++)
{
while(a[i]!=a[0])
{
  printf("Second smallest number = %d ",a[i]);
  exit(0);
}
}


}
void fun(int a[],int n)
{
int i,j,t=0;
for(i=0;i<n;i++)
{
    printf(" %d ",a[i]);
   
}

  for(i=0;i<n;i++)
  {
    for (j=0;j<i;j++)
    {
      if(a[i]<a[j])
      {
      t=a[i];
      a[i]=a[j];
      a[j]=t;
      }
    } 
  }
  
 for (i=0;i<n;i++)
  {
    printf("a[%d]=%d \n",i,a[i]);

  }
  
}

void main()
{
    int *p,n,i;

    printf("Enter the size of array = ");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
  
    for(i=0;i<n;i++)
    {
        printf("a[%d]= ",i);
        scanf("%d",&p[i]);
       
     
    }
    
    fun(p,n);
    last(p,n);


}