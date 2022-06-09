#include<stdio.h>
#include<stdlib.h>
int max(int a[],int n)
{
    int i,l=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>l)
        l=a[i];
      
    }
      return l; 
}
int eliminate(int a[],int k,int n)
{
    int i;
    for(i=0;i<n;i++)
     {
       if(a[0]==-1)
       return 0;

       else if(a[i]==-1)
       n=i;

       else
       break;
     }
    for(i=0;i<n;i++)
        {
        if(a[0]==k)
        return 0;
        else if(a[i]==k)
         {
            a[i+1]=-1;
            return 1;
         }

        }

}
void winner(int a[],int n)
{
    int i=0,flag,k,j;

    while(flag)
    {
        for(j=0;j<n;j++)
        {   if(a[j]==-1)
            break;
            printf(" %d ",a[j]);
        }
        printf("\n");
        if(i%2==0)
        {
            printf("\nANDY's turn \n");
            scanf("%d",&k);
            flag=eliminate(a,k,n);
        }
        else
        {
            printf("\nANDY's turn \n");
            scanf("%d",&k);
            flag=eliminate(a,k,n);
        }
     i++;
     printf("\nChance = %d\n",i);
    }
if(i%2==0)
printf("BOB is the winner");
else if(i%2!=0)
printf("ANDY is the winner \n");
}
void main()
{
    int a[20],i,n;
    printf("Enter the size = ");
    scanf("%d",&n);
    printf("**Enter the numbers of the game and get ready to play = **\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    winner(a,n);
}