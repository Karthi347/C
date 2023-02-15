#include<stdio.h>
int main()
{
	int i,sum=0,n;
	do
	{
		printf("Enter a positive integer:");
		scanf("%d",&n);
	}
	while (n<=0);
	
	for (i=1;i<=n;i+=1)
	{
		sum=sum+i;
	}
	printf("Sum = %d",sum);
	return 0;
}
