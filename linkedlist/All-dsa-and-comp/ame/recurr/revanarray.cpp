#include<iostream>

using namespace std;

int *atstart(int *b,int m,int size)
{
    int i=0,temp;
    for(i=size-1;i>0;i--)
    {
        temp=b[i];
        b[i+1]=temp;
    }
    b[0]=m;
    return b;
}

int * rev(int a[],int size)
{
 
    if(size==1)
    return a; 

    int *b=rev(a,size-1);
    int *c;
    return c=atstart(b,a[size],size);
}

int main()
{
    int a[5]={1,2,3,4,5};
    int size=sizeof(a)/sizeof(a[0]);
    int *b=rev(a,size);
    int i;
    for(int i=0;i<size;i++)
    cout<<b[i]<<" ";
    return 0;
}