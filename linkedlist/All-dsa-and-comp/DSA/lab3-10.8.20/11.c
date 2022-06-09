#include<stdio.h>
#include<stdlib.h>
void fun(int a[],int n)
{	int i,temp=0;


	int left=0,right=n-1;
	while(left<right)
	{
		while(a[left]%2==0 && left<right )
		left++;

		while(a[right]%2!=0 && left<right )
		right--;

		if(left<right)
		{
			temp=a[right];
			a[right]=a[left];
			a[left]=temp;
			left++; 
			right--;
		}
	}

	
}

void main()
{
int n,*a,i;
printf("Enter the array size = ");
scanf("%d",&n);
a=(int*)malloc(n*sizeof(int));
for(i=0;i<n;i++)
{
    printf(" a[%d] = ",i+1);
    scanf("%d",&a[i]);
}
fun(a,n);
printf("After seperation");
	for(i=0;i<n;i++)
	{
		printf(" %d ",a[i]);
	}
}
