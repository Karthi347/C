#include<stdio.h>
int main()
{
	int n1,n2;
	printf("Enter the 1st number:\nl");
    printf("Enter the 2st number:");
	scanf("%d %d",&n1,&n2);
	if (n1>n2)
	printf("%d is greater than %d",n1,n2);
	if (n2>n1)
	printf("%d is greater than %d",n2,n1);
	return 0;
}
