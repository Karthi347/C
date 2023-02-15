#include<stdio.h>
int main()
{
	int sal,bon;
	char gr;
	printf("Enter the grade of the employee : ");
	scanf("%s",&gr);
	printf("Enter the employee salary : ");
	scanf("%d",&sal);
	if (gr == 'A')
		bon = sal*(5/100);
	else if (gr == 'B')
		bon = sal*(10/100);
	else	
		printf("Invalid grade");
	printf("Salary = %d",sal);
	printf("Bonus = %d",bon);
	return 0;
}
