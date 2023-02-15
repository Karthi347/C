#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter three numbers to find triplet:");
	scanf("%d%d%d",&a,&b,&c);
	if (a*a+b*b==c*c)
		printf("It is pythagorean triplet");
	else
		printf("It is not a pythagorean triplet");
}
