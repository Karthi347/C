#include<stdio.h>
#include<math.h>
int main(void)
{
    int x,n;
    int sum,sub,mul,div;
    printf("Enter the value of x:");
    scanf("%d",&x);
    printf("Enter the value of n:");
    scanf("%d",&n);
    sum = x+n;
    sub = x-n;
    mul = x*n;
    div = x/n;
    if (int result = pow(x,n))
    {
    printf("power = %d\n",result);
	}
	printf("sum = %d\n",sum);
	printf("sub = %d\n",sub);
	printf("mul = %d\n",mul);
	printf("div = %d",div);
    return 0;
}
