#include<stdio.h>
#include<stdlib.h>
void main()
{
    int **a,n,i,j;
    scanf("%d",&n);
    a = (int **)malloc(n * sizeof(int *));
    for(i=0;i<n;i++)
    {
       
        a[i] = (int *)malloc(n*sizeof(int));
        for(j=0;j<n;j++)
        {
           printf("a[%d][%d] = ",i,j);
        scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf(" %d ",a[i][j]);
        }
        printf("\n");
    }
}