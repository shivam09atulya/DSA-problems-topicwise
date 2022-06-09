#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int p = 1;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        p *= arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", p / arr[i]);
    }
    printf("\n");
    return 0;
}
