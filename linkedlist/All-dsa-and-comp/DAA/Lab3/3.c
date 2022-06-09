#include <stdio.h>
int findSqrt(int x)
{
    int i = 1;
    while (i * i <= x)
    {
        i++;
    }

    return i - 1;
}

int main(void)
{
    int x, y;
    printf("Enter the the value\n");
    scanf("%d", &x);
    y = findSqrt(x);
    printf("sqrt(%d) = %d\n", x, y);
}