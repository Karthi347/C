#include<stdio.h>
int fact(int i)
{
	int mul=1,j;
	for (j=1;j<=i;j++)
	{
		mul = mul*j;
	}
	return mul;
}

int main()
{
	int i,n;
	float f,sum=0.0;
	printf("Enter a number : ");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		f = fact(i);
		sum = sum + i/f;
	}
	printf("Sum = %f",sum);
	return 0;
}
