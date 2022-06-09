#include<stdio.h>
#include<stdlib.h>
void toh(int n,int a,int b, int c)
{
    if(n>0){
    toh(n-1,a,c,b);
    printf("\nMove from %d to %d \n",a,c);
    toh(n-1,b,a,c);
    }
}
void main()
{
    int n,a=1,b=2,c=3;
    scanf("%d",&n);
    toh(n,a,b,c);
}