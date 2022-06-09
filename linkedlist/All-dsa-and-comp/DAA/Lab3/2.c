#include <stdio.h>
#include <time.h>
#include<stdlib.h>

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
}
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
int main()
{
    clock_t start = clock();
    int n = 1000, j = -1;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand();
    }
    bubbleSort(arr, n);
    printf("Sorted array: \n");
    printArray(arr, n);
    start = clock() - start;
    double time_taken = ((double)start) / CLOCKS_PER_SEC;
    printf(" took %f seconds to execute \n", time_taken);
    return 0;
}