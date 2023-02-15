#include<stdio.h>
int main()
{	
	int age;
	printf("Enter your age:");
	scanf("%d",&age);
	if (age>=18)
	printf("You are eligible for voting.");
	else
	printf("You are not Eligible for voting.\n");
	printf("Have to wait %d more years for voting.",18-age);
	return 0;
}

