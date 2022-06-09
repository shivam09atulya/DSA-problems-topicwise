#include<stdio.h>
#include<stdlib.h>
int max(int a[],int *n)
{
    int i,l=a[0];
    for(i=0;i<*n||a[i]==-1;i++)
    {
        if(a[i]>l)
        l=a[i];
      
    }
      return l; 
}
int eliminate(int a[],int k,int *n)
{
    int i;
    for(i=0;i<*n;i++)
     {
       if(a[0]==-1)
       return 0;

       else if(a[i]==-1)
       *n=i;
     }
    for(i=0;i<*n;i++)
        {
        if(a[0]==k)
        return -2;

        else if(a[i]==k)
         {
            a[i]=-1;
            return 1;
         }

        }
        return 0;

}
void winner(int a[],int n)
{
    int i=0,flag,k;
    

    while(flag)
    {
       /* for(j=0;j<n;j++)
        {   if(a[j]==-1)
            break;
            printf(" %d ",a[j]);
        }
        printf("\n");*/
        if(i%2==0)
        {
            //printf("\nANDY's turn \n");
            k=max(a,&n);
            flag=eliminate(a,k,&n);
        }
        else
        {
           // printf("\nBOB's turn \n");
            k=max(a,&n);
            flag=eliminate(a,k,&n);
        }

        if(flag==-2)
        {
            goto count;
        }
        i++;
     
   // printf("\nChance = %d\n",i);
    }
    count:
if(i%2==0)
printf("BOB\n");
else if(i%2!=0)
printf("ANDY\n");
}
int main()
{
    int a[20],i,j,n,y;
    scanf("%d",&y);
for(j=0;j<y;j++)
    {
   // printf("Enter the size = ");
    scanf("%d",&n);
    //printf("**Enter the numbers of the game and get ready to play = **\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    winner(a,n);
    }
    
    return 0;
}