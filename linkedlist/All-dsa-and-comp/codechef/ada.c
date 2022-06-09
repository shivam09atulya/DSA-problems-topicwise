#include<stdio.h>
#include<math.h>
int main()
{
    int x,n,i,a[5],sum=0;
    scanf("%d",&x);
    while(x--)
    {
        scanf("%d",&n);
        for(i=n-1;i>=0;i--)
        scanf("%d",&a[i]);

        for(i=1;i<n;i++)
        sum+=a[i];

        printf("%d", a[0] + abs(a[0] - sum));
    }
    return 0;
}