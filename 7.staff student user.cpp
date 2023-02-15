#include<stdio.h>
int main()
{
	int stu,staffu,tu;
	printf("Total Users:");
	scanf("%d",&tu);
	printf("Staff Users:");
	scanf("%d",&staffu);
	stu=tu-(staffu+staffu/3);
	printf("Student Users:%d",stu);	
}
