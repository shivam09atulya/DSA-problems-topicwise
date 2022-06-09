#include<stdio.h>
void main()
{
    int i,j,n,k;
    printf("Enter the size of the pyramid");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=n;j>i;j--)
        printf(" ");

        for(k=0;k<i;k++)
        printf("*");

        printf("\n");
    }

}