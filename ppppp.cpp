#include<stdio.h>
int main()
{
	int i,j,r,number=1;
	printf("Number of rows:");
	scanf("%d",&r);
	for (i=1;i<=r;i++)
		{
		for (j=1;j<=i;j++)
			{
			printf("%d ",number);
			}
		number++;
		printf("\n");
		}
	return 0;
}
