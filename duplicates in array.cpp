#include<stdio.h>
int main()
{
	int arr[1000],n,i,j;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	printf("Enter the elements in the array")
	for (i=0;i<n;i++)
	{
		scanf("%d",arr[i]);
	}
	printf("Duplicates removed array:");
	for (i=0;i<n;i++)
		for (j=0;j<i;j++)
			
