#include<stdio.h>
#include<stdlib.h>
void main()
{
    int **a,i,j;
    for(i=0;i<3;i++)
    {
        a=(int **)malloc(4*sizeof(int*));
        for(j=0;j<4;j++)
        {
            printf("a[%d][%d]",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf(" %d ",a[i][j]);
        }
        printf("%d");
    }
}