#include<stdio.h>
#include<stdlib.h>
void main()
{
    int a[10],i;
    int *p;
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<10;i++)
    {
        p=&a[i];
        printf("%d\n",p);
    }
    p=(int*)&a;
    printf("\n\n\n\n%d\n\n",p);
}