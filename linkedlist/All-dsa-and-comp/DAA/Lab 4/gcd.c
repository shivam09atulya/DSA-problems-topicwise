#include <stdio.h>
#include<time.h>
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
    clock_t start = clock();
    int i, j;
    printf("Enter 2 numbers: ");
    scanf("%d%d", &i, &j);
    printf("GCD %d ", gcd(i, j));
    start = clock() - start;
    double time_taken = ((double)start) / CLOCKS_PER_SEC;
    printf("\ntook %f seconds to execute \n", time_taken);
    return 0;
}