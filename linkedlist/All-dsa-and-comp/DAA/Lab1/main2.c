#include <stdio.h>

int main()
{
    int arr[10], i, j, sum,isThereACombination = 0;
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the sum \n");
    scanf("%d", &sum);
    int count=0;
    for (i = 0; i < 10; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            if (i != j && arr[i] + arr[j] == sum)
            {
                isThereACombination = 1;
                printf("%d + %d = %d\n", arr[i], arr[j], sum);
                count++;
            }
        }
    }
    if (isThereACombination == 0)
    {
        printf("No combinations found\n");
    }
    else
    {
        printf("Total  Combinations found = %d",count);
    }
}