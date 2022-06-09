#include <stdio.h>


void highestocc(int a[], int size)
{
    if (!a)
        return;

    int i, j, count, count1 = 0, no = a[0];
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            if (a[i] == a[j])
                count++;
        }
        if (count1 < count)
        {
            count1 = count;
            no = a[i];
        }
        count = 0;
    }
    printf("No of times %d occured is %d",no,count1);

}

int main()
{
    int a[] = {1, 2, 2, 4, 3, 2, 3,4,4,4};
    int size = sizeof(a) / sizeof(int);
    highestocc(a,size);
    return 0;
}