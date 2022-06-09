#include <stdio.h>
void add(int *num)
{
    *num = *num + 500;
}
void main()
{
    int x;
    printf("Enter the number\n");
    scanf("%d", &x);
    printf("Original value=%d\n", x);
    add(&x);
    printf("Modified value=%d\n", x);
}