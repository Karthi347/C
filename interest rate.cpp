#include<stdio.h>
int main()
{
	int pa,noy,r,interest,sc,y,n;
	printf("Enter the principal amount:");
	scanf("%d",&pa);
	printf("Enter the no of years:");
	scanf("%d",&noy);
	printf("Is customer senior citizen(y/n):");
	scanf("%d",&sc);
	if (sc==y)
		r=12;
	else if (sc==n)
		r=10;
	else
		printf("Enter a legal value");
	interest=(pa*noy*r)/100;
	printf("Interest:%d",interest);
}
