#include <math.h>
#include <stdio.h>
#include <time.h>
#include<stdlib.h>

void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
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

    insertionSort(arr, n);
    printArray(arr, n);
    start = clock() - start;
    double time_taken = ((double)start) / CLOCKS_PER_SEC;
    printf(" took %f seconds to execute \n", time_taken);
    return 0;
}