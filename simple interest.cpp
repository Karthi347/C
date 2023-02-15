#include<stdio.h>
int main()
{
	int age,si;
	float p,n,r;
	float simple (float p,float n,float r);
	si=p*n*r/100;
	scanf ("%f%f%f",&p,&n,&r);
	scanf("%d",&age);
	if (age>=65)
	r=12/100;
	else
	r=10/100;
	printf("%f",simple(p,n,r));
	return 0;
}
