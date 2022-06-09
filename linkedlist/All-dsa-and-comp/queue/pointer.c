#include<stdio.h>
#include<stdlib.h>
void main()
{
    int p=10;
    int **dp,*sp;
    *sp=&p;**dp=&p;
    printf("Double pointer value = %d",*dp);
    printf("Single pointer value = %d", *sp);
    printf("Double pointer address = %d", &dp);
    printf("Single pointer address = %d", &dp);
}