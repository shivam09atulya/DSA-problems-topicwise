#include <stdio.h>
int main()
{
    int n, rev = 0, remainder;
    printf("Enter an integer: ");
    scanf("%d", &n);
    while (n/10)
    {
        remainder = n % 10;
        rev = rev * 10 + remainder;

    }
    printf("Reversed number = %d", rev);
    return 0;
}