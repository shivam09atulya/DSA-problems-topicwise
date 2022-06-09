#include <stdio.h>

void find(int a[], int size, int num)
{
    if (!a)
        return;

    int i;
    for (i = 0; i < size; i++)
    {
        if (a[i] == num)
        {
            printf("INDEX at  %d\n", i);
            break;
        }
    }
    if (i != size)
        printf("REVERSE INDEX at %d \n", size - 1);

    if (i == size)
        printf("Not Found");
}

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int size = sizeof(a) / sizeof(int);
    int num;
    scanf("%d", &num);
    find(a, size, num);
    return 0;
}