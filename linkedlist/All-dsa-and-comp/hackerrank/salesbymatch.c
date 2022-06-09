#include<stdio.h>
int main()
{
    int n,i,c[100],x;
      for(i=0;i<=100;i++)
    {
        c[i]=0;
    }
    scanf("%d",&n);
  
    for(i=1;i<=n;i++)
    {
        scanf("%d",&x)=;
        c[x]++;
    }
    int ans=0;
    for(i=0;i<100;i++)
    {
        ans+=c[i]/2;
       
    }
     printf("%d",ans);
    return 0;
}