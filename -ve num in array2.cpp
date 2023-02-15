#include<stdio.h>
int main()
{
	int arr[1000],i,n,x=0;
	printf("Enter the size of array:");
	scanf("%d",&n);
	printf("Enter the elements in the array:");
	for (i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for (i=0;i<n;i++)
	{
		if (arr[i]<0)
			x++;
	}
	printf("Number of negative numbers = %d",x);
	return 0;
}
