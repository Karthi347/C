#include<stdio.h>
int main()
{
	int arr[MAX_SIZE];
	int i,N;
	printf("enter the size of the array");
	scanf("%d",&N);
	printf("enter the elements in the array");
	for(i=1;i<=N;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\nALL negatie elements in array are");
	for(i=0;i<=N;i++)
	{
		if(arr[i]<0)
		{
			printf("%d\t",arr[i]);
		}
	}
	return 0;
}
