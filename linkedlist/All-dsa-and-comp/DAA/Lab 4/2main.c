#include <stdio.h>
int gcd(int i, int j)
{
    if (i == 0)
        return j;
    if (j == 0)
        return i;
    if (i == j)
        return i;
    if (i > j)
        return gcd(i - j, j);
    return gcd(i, j - i);
}
int main()
{
    int i, j;
    printf("Enter 2 numbers: ");
    scanf("%d%d", &i, &j);
    printf("GCD %d ", gcd(i, j));
    return 0;
}