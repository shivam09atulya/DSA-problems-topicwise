#include<bits/stdc++.h>

int main()
{
    int a,b,c,count=0;
    scanf("%d%d%d",&a,&b,&c);
    if(a==b)
    {
        count++;
    }
    else if(a==c)
    {
        count++;
    } 
    else if(b==c)
    {
        count++;
    }
    if(count==0)
    printf("No");
    else
    printf("Yes");
    return 0;
}