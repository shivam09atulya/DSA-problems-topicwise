#include <stdio.h>
#include<time.h>

int arraySum(int *arr, int n)
{
    int i, sum = 0;
    for (i = 0; i < n; i++)
    {
        sum += *arr;
        arr++;
    }
    return sum;
}
int main()
{
    int i, n, arr[100], sum;
    printf("Enter N: ");
    scanf("%d", &n);
    printf("Enter Numbers: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    sum = arraySum(arr, n);
    printf("%d\n", sum);
    return 0;
}