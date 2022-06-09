#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#define max(a,b)((a)>(b)?(a):(b))
#define min(a,b)((a)<(b)?(a):(b))
int main()
{
    int m,temp=0;;
    scanf("%d",&m);
    while(m--)
    {
        int n,i,j,a[4];
        scanf("%d",&n);
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);

        for(i=0;i<n;i++)
        {
            for(j=i;j<n;j++)
            {
                if(a[i]<a[j])
                {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;

                }
            }
        }
        int b1=0,b2=0;
        b1=a[0];
        for(i=1;i<n;i++)
        {
            if(b1>b2)
            b2+=a[i];

            else
            b1+=a[i];
        }
        printf("%d\n",max(b1,b2));
    }
    return 0;
}
