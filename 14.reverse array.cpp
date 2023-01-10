#include <stdio.h>
int main()
{
	int arr[]={16,18,27,16,23,21,19};
	int length = sizeof(arr)/sizeof(arr[0]);
	printf("Real Array :  \n");
	for (int i=0;i<length;i++)
	{
		printf("%d ",arr[i]);
	}
		printf("\n");
		printf("Reversed Array :  \n");
		for (int i=length-1;i>=0;i--)
		{
		printf("%d ",arr[i]);
	    }
	    return 0;
}
