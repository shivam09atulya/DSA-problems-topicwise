#include<iostream>
#include<algorithm>
#include<stack>
#include<vector>

using namespace std;

int rain(int a[],int size)
{
    
    int i,j,sum=0;
    for(i=1;i<size-1;i++)
    {
        
        int max1=a[i],max2=a[i],result,atlast;
        // absolute greater left element
        for(j=i-1;j>=0;j--)
        if(max1<a[j])
        max1=a[j];

        // absolute greater right element
        for(j=i+1;j<size;j++)
        if(max2<a[j])
        max2=a[j];

        // min of the two
        result=min(max1,max2);
        if(result!=0){
            // every block holding the area
        atlast=result-a[i];
        sum+=atlast;
        }
    }
    return sum;
}

int main()
{

    int a[]={0,1,0,2,1,0,1,3,2,1,2,1};
    int size = sizeof(a) / sizeof(int);
    cout<<"Total rain = "<<rain(a,size);
    return 0;
}