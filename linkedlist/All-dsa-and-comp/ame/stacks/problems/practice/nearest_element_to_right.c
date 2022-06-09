#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a[10]={1,3,2,4};
    int i=0,j;
    for(i=0;i<sizeof(a)/sizeof(int);i++)
    {
      for(j=i+1;j<sizeof(a)/sizeof(int);j++)  //j is dependent on i and so it can be solved by stack
        {
            if(j+1>sizeof(a)/sizeof(int))
            {
                printf("-1");
                break;
            }
            else if(a[j]>a[i])
            {
                printf("%d",a[j]);
                break;
            }
        }
    }
    printf("-1");
    return 0;
}