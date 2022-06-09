#include<stdio.h>
#include<stdlib.h>
void lar(int a[],int n,int k)
{
   
   int i,m=0;
    for(i=0;i<n-1;i++)
    {

        if(a[i]!=a[i+1])
        {
            m++;
        }

        if(m==k)
        {
            printf("%drd largest no. is =  %d ",k,a[i]);
            break;
        }
    }
}
 void small(int a[],int n,int k)
 {
   int i,m=0;
    for(i=n;i>1;i--)
    {

        if(a[i]!=a[i-1])
        {
            m++;
        }

        if(m==k)
        {
            printf("%drd smallest no. is =  %d ",k,a[i]);
            break;
        }
    }
 }
void asc(int a[],int n)
{
    int i,j,t=0;
    for (i=0;i<n;i++)
    {
        for (j=i;j<n;j++)
        if(a[i]<a[j])
        {
            t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
    }
    
}
void init(int a[],int n)
{
    int i;
    for (i=0;i<n;i++)
    {
        printf("A[%d]= ",i+1);
        scanf("%d",&a[i]);
    }
}
void main()
{
    int k,*p,i,n;
    printf("Enter the size of array = ");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    printf("Enter the value of k = ");
    scanf("%d",&k);
    init(p,n);
    asc(p,n);
    lar(p,n,k);
    small(p,n,k);
}
