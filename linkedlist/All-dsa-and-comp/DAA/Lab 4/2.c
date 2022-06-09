    #include <stdio.h>
    #include <time.h>
    #include<stdlib.h>

    int getRandom(int x, int y)
    {
            return (x + rand() % (y - x + 1));
    }

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
    {
        for (j = 0; j < n - i - 1; j++)
        { if (arr[j] > arr[j + 1])
            swap(&arr[j], &arr[j + 1]);
        }
    }
    }

    int BinarySearch(int arr[], int l,int r, int x)
    {
        if (r >= l)
        {
            int mid = getRandom(l, r);

            if (arr[mid] == x)
                return mid;

            if (arr[mid] > x)
                return BinarySearch(arr,l,mid-1,x);

            return BinarySearch(arr, mid+1,r,x);
        }
        return -1;
    }

    int main(void)
    {
        clock_t start = clock();
        int size;
        printf("Enter the size = \n");
        scanf("%d",&size);

        int arr[size];
        int i =0,x;
    while(size--)
    {
        arr[i++]=getRandom(100,700);
    }

        int n = sizeof(arr) / sizeof(arr[0]);

        for(int i =0;i<n;i++)
        {
            printf(" %d ",arr[i]);
        }
        printf("\n");

        printf("Enter the no to be searched " );
        scanf("%d",&x);

        int result = BinarySearch(arr, 0, size-1,x);
        if(result==-1) {
            printf("Element is not present in array\n");
            }
        else
        printf("Element is present at index %d\n", result);

        start=clock()-start;
        double time_taken=((double)start)/CLOCKS_PER_SEC;
        printf("took %f seconds to execute \n",time_taken);
        return 0;
    }
