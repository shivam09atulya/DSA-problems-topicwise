#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *p,i,*ptr;
    p=(int*)malloc(5*sizeof(int));
    ptr=p;
    for (i=0;i<5;i++)
    {
        scanf("%d",p);
        p++;

    }
    for (i=0;i<5;i++)
    {
    printf(" %d ",*ptr+5);
    ptr++;
    }
    /*for (i=0;i<5;i++)
    {
        printf("%d",*ptr);
        ptr++;

    }*/
    
}