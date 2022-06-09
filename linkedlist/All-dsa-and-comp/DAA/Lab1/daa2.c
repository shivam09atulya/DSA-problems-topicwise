#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[10], i, sum, k;
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the sum \n");
    scanf("%d", &sum);
    for (i = 0; i < 10; i++)
    {
        if (arr[i] == sum)
        {
            printf("Index from start: %d\n", i);
            printf("Index from end: %d\n", 10 - i - 1);
            break;
        }
    }
}
