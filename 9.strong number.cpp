#include<stdio.h>

int fact(int r)
{
	int mul=1,i;
	for (i=1;i<=r;i++)
	{
		mul = mul*i;
	}
	return mul;
}

int main()
{
	int n,k,f,r,sum=0;
	printf("Enter the number : ");
	scanf("%d",&n);
	k = n;
	while (k!=0)
	{
		r = k%10;
		f = fact(r);
		k = k/10;
		sum = sum+f;
	}
	if (sum==n)
	{
		printf("Given number is a strong number");
	}
	else
		printf("Given number is not a strong number");
	return 0;
}


