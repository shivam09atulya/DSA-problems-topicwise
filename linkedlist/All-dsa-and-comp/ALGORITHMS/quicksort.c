#include<stdio.h>
#include<stdlib.h>
void partition(int l,int h)
{
    int pivot=a[l],i=l,j=h;
    while(i<j)
    {
        do{
            i++;
        }while(a[i]<=pivot);

        do{
            j--;
        }while(a[i]>pivot);
        if(i<j)
        swap()
    }

}
void quicksearch(int h,int l)
{
    if(h<l)
    {
        j=partition(l,h);
        quicksearch(l,j);
        quicksearch(j+1,h);

    }
}
void main() 
{
    int n,i,a[20];
    scanf("%d",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    quicksearch()
}