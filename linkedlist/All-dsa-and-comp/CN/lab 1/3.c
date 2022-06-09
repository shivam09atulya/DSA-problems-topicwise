#include <stdio.h>
void swapByRef(int *x, int *y)
{
    int t;
    t = *x;
    *x = *y;
    *y = t;
}
int main()
{
    int a, b;
    printf("Enter the values of a and b\n");
    scanf("%d%d", &a, &b);
    swapByRef(&a, &b);
    printf("The swapped values are %d %d\n", a, b);
}