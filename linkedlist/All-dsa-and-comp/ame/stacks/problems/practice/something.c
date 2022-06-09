#include<stdio.h>

int main()
{
    int i,j,a[]={1,2,3,4,5,6,7};
    for(i=0;i<sizeof(a)/sizeof(int);i++)
    {
        for(j=i-1;j>0;j--)
        {
            printf(" %d ",a[j]);
        }
        printf("\n");
    }
    return 0;
}