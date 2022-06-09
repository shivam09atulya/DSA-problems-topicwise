#include <stdio.h>
#include <math.h>
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7};
    int i, j,k, size,count=0;
    int key;
    printf("Key  ");
    scanf("%d", &key);
    size = sizeof(a) / sizeof(int);
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
        for(k=0;k<size;k++)
          {  if (a[i] + a[j] + a[k] == key)
                printf(" i=%d j=%d k=%d \n", i + 1, j + 1,k+1);
                count++;}
        }
    }
    if(count==0)
    printf("No such pairs");
    return 0;
}