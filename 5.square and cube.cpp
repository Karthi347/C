#include<stdio.h>
int main()
{
	float n,square,cube;
	printf("Enter the number :--> ");
	scanf("%f", &n);
	square = n * n;
	cube = n * n * n;
	printf("Square of the number : %f",square);
	printf("\nCube of the number : %f",cube);
	return 0;
}
