#include<stdio.h>

void change(int *q)
{
    *q=*q+1;
    printf("Value of q is = %d \n",*q);
}

int main()
{
    int m=23;
    int *p=&m;

    printf("Value of p before change = %d \n", *p);
    change(p);
    printf("Value of p after change = %d \n",*p);

}