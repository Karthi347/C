#include<stdio.h>
int main()
{
	int m,n,i;
	printf("M=");
	scanf("%d",&m);
	printf("N=");
	scanf("%d",&n);
	if (m>n)
		{
		
		printf("All Odd Numbers=");
		for (i=n+1;i<m;i++)
			if (i%2!=0)
				printf("%d,",i);
		printf("\nAll Even Numbers=");
		for (i=n+1;i<m;i++)
			if (i%2==0)
				printf("%d,",i);
		}
	else if (m<n)
		{
		printf("All Odd Numbers=");
		for (i=m+1;i<n;i++)
			if (i%2!=0)
				printf("%d,",i);
		printf("\nAll Even Numbers=");
		for (i=m+1;i<n;i++)
			if (i%2==0)
			printf("%d,",i);
		}
}
