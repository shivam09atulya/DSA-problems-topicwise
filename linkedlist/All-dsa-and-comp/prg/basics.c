#include<stdio.h>
#include<stdlib.h>
void init(int a[],int n)
{
    int i;
    for (i=0;i<n;i++)
    {
        printf("A[%d]= ",i+1);
        scanf("%d",&a[i]);
    }
}
void display(int a[],int n)
{
    int i;
    for (i=0;i<n;i++)
    {
        printf(" %d ",a[i]);
    }
    printf("\n");
}
void fun(int a[],int n)
{
  int i,l=a[0],t=0,k;
  for(i=0;i<n;i++)
  {
      if (a[i]>l)
      {
          l=a[i];
          k=1;
      }
      else if(a[i]==l)
      {
          k++;
      }
  }
  printf("Largest number is %d and it occured %d times = ",l,t);
}


void main()
{int *p,n;
printf("Enter the size of ararry = ");
scanf("%d",&n);
p=(int*)malloc(n*sizeof(int));
init(p,n);
display(p,n);
fun(p,n);

}
