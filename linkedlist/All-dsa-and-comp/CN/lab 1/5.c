#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p, i, n;

    printf("Initial size of the array is 4\n\n");
    p = (int *)calloc(4, sizeof(int));

    if (p == NULL)
    {
        printf("Memory allocation failed");
        exit(1);
    }

    for (i = 0; i < 4; i++)
    {
        printf("Enter element at index %d: ", i);
        scanf("%d", p + i);
    }

    printf("\nIncreasing the size of the array by 5 elements ...\n ");

    p = (int *)realloc(p, 9 * sizeof(int));

    if (p == NULL)
    {
        printf("Memory allocation failed\n");
    }

    printf("\nEnter 5 more integers\n\n");

    for (i = 4; i < 9; i++)
    {
        printf("Enter element at index %d: ", i);
        scanf("%d", p + i);
    }

    printf("\nFinal array: \n\n");

    for (i = 0; i < 9; i++)
    {
        printf("%d ", *(p + i));
    }
}