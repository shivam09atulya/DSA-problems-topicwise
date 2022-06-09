#include <stdio.h>
void add(int num)
{
    num = num + 300;
    printf("Value inside function=%d\n", num);
}
void main()
{
    int x;
    printf("Enter the number\n");
    scanf("%d", &x);
    printf("Original value=%d\n", x);
    add(x);
    printf("Modified value in main=%d\n", x);
}