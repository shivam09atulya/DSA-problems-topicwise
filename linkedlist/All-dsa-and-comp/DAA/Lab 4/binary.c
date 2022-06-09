#include <stdio.h>
#include<time.h>
int binarySearch(int arr[], int l, int r, int x)
{
    int mid;
    if (r >= l)
    {
        mid = l + (r - l) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
        else
            return binarySearch(arr, mid + 1, r, x);
    }
    return -1;
}
int main()
{
    clock_t start = clock();
    int arr[1000], n, i, res;
    printf("Enter N: ");
    scanf("%d", &n);
    printf("Enter Numbers: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Search Element: ");
    scanf("%d", &i);
    res = binarySearch(arr, 0, n - 1, i);
    if (res == -1)
        printf("Not Found\n");
    else
        printf("Found at index %d", res);
    start = clock() - start;
    double time_taken = ((double)start) / CLOCKS_PER_SEC;
    printf("\ntook %f seconds to execute \n", time_taken);
    return 0;
}