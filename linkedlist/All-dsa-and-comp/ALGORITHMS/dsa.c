#include <stdio.h>
int main()
{
    int n, i, d, position, t;
    printf("Enter number of elements:- ");
    scanf("%d", &n);
    float array[n];
    printf("Enter the numbers:-\n");
    for (i = 0; i < n; i++)
        scanf("%f", &array[i]);
    for (i = 0; i < (n - 1); i++)
    {
        position = i;
        for (d = i + 1; d < n; d++)
        {
            if (array[position] > array[d])
                position = d;
        }
        if (position != i)
        {
            t = array[i];
            array[i] = array[position];
            array[position] = t;
        }
    }
    printf("Sorted list in ascending order:-\n");
    for (i = 0; i < n - 1; i++)
        printf("%.2f, ", array[i]);
    printf("%.2f ", array[i]);
    return 0;
}
