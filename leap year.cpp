#include<stdio.h>
int main()
{
	int d,m,y;
	printf("Enter the date:");
	scanf("%d",&d);
	printf("Enter the month:");
	scanf("%d",&m);
	printf("Enter the year:");
	scanf("%d",&y);
	printf("Entered date : %d/%d/%d",d,m,y);
	if ( y%400==0 && y%4==0 || y%100!=0 )
		printf("\nGiven year is Leap Year");
	else
		printf("Given year is Non Leap Year");
	
}
