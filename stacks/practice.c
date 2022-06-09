#include<stdio.h>

int reverse(int n)
{
    int a[20],i=1,num=0,rem;
    while(n/10)
    {
        rem=n%10;
        a[i]=rem;
        i++;
    }
    for(int j=1;j<i;j++)
    {
        num+=(10)^(i-j)*a[j];
    }
    return num;


}

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",reverse(n));
    return 0;
}