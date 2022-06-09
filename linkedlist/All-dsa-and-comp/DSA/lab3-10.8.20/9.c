#include<stdio.h>
#include<stdlib.h>
void main()
{	int n,i,a[10];
	printf("Enter the size of array = ");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}

	int left=0,right=n-1;
	while(left<right)
	{
		while(a[left]==0 && left<right )
		left++;

		while(a[right]=1 && left<right )
		right--;

		if(left<right)
		{
			a[right]=1;
			a[left]=0;
			left++; 
			right--;
		}
	}
	printf("After seperation");
	for(i=0;i<n;i++)
	{
		printf(" %d ",a[i]);
	}
}