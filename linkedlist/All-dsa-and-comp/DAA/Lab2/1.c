#include<stdio.h>
#include<math.h>
int main()
{
    int a[]={1,2,3,4,5,6,7};
    int i , j,size,count;
    int key;
    printf("key  ");
    scanf("%d",&key);
    size=sizeof(a)/sizeof(int);
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            if(pow(a[j],2) + pow(a[i],2) == key)
            { printf(" i=%d j=%d \n",i+1,j+1);
            count++;}
        }
    }
    if(count==0)
    printf("No such pairs");
    return 0;
}