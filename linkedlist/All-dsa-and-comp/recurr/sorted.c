#include<stdio.h>

int sorted(int a[],int n)
{
    int x;
    if(n>1)
    {
       
        if (a[n] != a[n - 1])
            return -1;
        else
            return 0;
        x += sorted(a, n - 1);
    }
  
    return x;
}
void main()
{
    int a[8],i;
    int n=8;
    for(i=0;i<8;i++)
    scanf("%d",&a[i]);
    int b=sorted(a,8);
    printf("%d\n",b);
    if(b==0)
    printf("sorted\n");
    else
    printf("unsorted\n");
}