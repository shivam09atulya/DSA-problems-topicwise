#include<stdio.h>

void change(int *q)
{
    printf("Before swap\n");
    printf("The value of  q is \t %d\n", *q);
    printf("The address of  q is \t%d\n", &q);
    printf("The address q is poiting is \t%d\n", q);
    int t=6;
    *q=6;
    printf("After swap\n");
    printf("The value of  q is \t%d\n",*q);
    printf("The address of  q is \t%d\n",&q);
    printf("The address q is poiting is \t%d\n", q);
}

int main()
{
    int *p,t;
    p=&t;
    t=5;
    printf("The value of  p is \t%d\n", *p);
    printf("The address of  p is \t%d\n", &p);
    printf("The address p is poiting is \t%d\n", p);
    change(p);
    printf("The value of  p is \t%d\n", *p);
    printf("The address of  p is \t%d\n", &p);
    printf("The address p is poiting is \t%d\n", p);
    return 0;
}