#include <iostream>

using namespace std;

void find(int a[],int size,int num)
{
    if(!a) return ;

    int i;
    for(i=0;i<size;i++)
    {
        if(a[i]==num){
        cout<<" Index "<<i<<endl;
        break;
        }
    }
    if(i!=size)
    cout<<"Index in reverse "<<size-i<<endl;

    if(i==size)
    cout<<"Not Found";
}

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int size = sizeof(a) / sizeof(int);
    int num;
    cin>>num;
    find(a,size,num);
    return 0;
}