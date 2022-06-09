#include<iostream>
using namespace std;

int highestocc(int a[],int size)
{
    if(!a) return INT_MIN;
    
    int i,j,count,count1=0,no=a[0];
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            if(a[i]==a[j])
            count++;
        }
        if(count1<count)
        {count1=count;
        no=a[i];
        }
        count=0;
    }
    return no;
}

int main()
{
    int a[]={1,2,2,4,3,2,3};
    int size=sizeof(a)/sizeof(int);
   cout<< highestocc(a,size);
    return 0;
}