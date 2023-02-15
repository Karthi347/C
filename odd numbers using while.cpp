#include <stdio.h>
int main()
{
	int x,y=1,z;
	printf("Enter the value of n:")
	scanf("%d",&x);
	while (y<=x)
	{
		if (y%2!=0)
			printf("%d\n",y);
		y++;
	}
	return 0;
}
