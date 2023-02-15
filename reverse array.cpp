#include<stdio.h>
int main()
{
	int arr[1000],n,i;
	printf("Enter the size of array:");
	scanf("%d",&n);
	printf("Enter the elements in the array:");
	for (i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Reversed array:");
	for (i=n-1;i>=0;i--)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
