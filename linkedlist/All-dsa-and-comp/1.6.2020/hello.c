#include<stdio.h>

void main()
{
    int *p,a;
    printf("Enter = ");
    scanf("%d",&a);

    p=&a;
    printf("*P = ",*p);
    printf("\n p= ",p);
    
}
