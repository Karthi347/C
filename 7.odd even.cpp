#include <stdio.h>
int main()
{
	int num;
	printf("Enter the Number : ");
	scanf("%d",&num);
	if(num%2==0)
	{
		printf("The given number is Even.");
	}
	else
	{
		printf("The given number is Odd.");
	}
	return 0;
}
