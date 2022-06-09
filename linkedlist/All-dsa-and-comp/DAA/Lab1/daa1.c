#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[10], i, j, temp, max = INT_MIN;
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 10; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    temp = 0;
    for (i = 0; i < 10; i++)
    {
        if (arr[i] == arr[i + 1] && i != 9)
            temp++;
        else if (temp > max)
        {
            max = temp;
            temp = 0;
            j = arr[i];
        }
    }
    printf("\n%d(Number)->%d(Occurence)\n", j, max);
}
