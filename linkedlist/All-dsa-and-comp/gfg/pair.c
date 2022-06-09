#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a[10], n, i, sum = 0;
        scanf("%d", &n);
        for (i = 0; i < n; i++)
        {
            a[i] = 0;
            scanf("%d", &a[i]);
            sum += a[i];
        }
        printf("%d", sum);
    }

    return 0;
}