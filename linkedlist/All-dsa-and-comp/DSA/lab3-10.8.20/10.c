#include<stdio.h>
#include<stdlib.h>

void main()
{int m,n,i,j,count=0;
printf("Enter the row and column of array = ");
scanf("%d%d",&m,&n);
printf("Enter the elements = ");
printf("\n");
int *p[m];
for(i=0;i<m;i++)
p[i]=(int*)malloc(sizeof(int)*n);
for(i=0;i<m;i++)
 for(j=0;j<n;j++)
 {  
     printf("a[%d][%d]= ",i,j);
     scanf("%d",&p[i][j]);
 }

for(i=0;i<m;i++)
{
 for(j=0;j<n;j++)
 {
     printf("\t%d\t",p[i][j]);
 }
 printf("\n");

}

 int temp=0;
     for(i=0;i<(m/2);i++)
    {
        for(j=0;j<n;j++)
        {   
          temp=p[j][i];
          p[j][i]=p[j][n-1-i];
          p[j][n-1-i]=temp;
        }
    }
    printf("\n");
for(i=0;i<m;i++)
{
 for(j=0;j<n;j++)
 {
     printf("\t%d\t",p[i][j]);
 }
 printf("\n");

}
}
