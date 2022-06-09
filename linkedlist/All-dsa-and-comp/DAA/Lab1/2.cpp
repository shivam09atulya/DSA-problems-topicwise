#include <iostream>

using namespace std;

void comb(int a[],int size,int sum)
{
    if(!a) return;

    int i,j,sum1=0;
    
    for(i=0;i<size;i++)
    {
        for(j=i;j<size;j++)
        {
            sum1+=a[j];

            if(sum==sum1)
            {

            }
        }
    }
}

int main()
{
    int a[]={1,2,3,4,5};
    int size=sizeof(a)/sizeof(int);
    int b;
    cin>>b;
    comb(a,size,b);
    return 0;
}