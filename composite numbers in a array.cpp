#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int a[100],count=0,i,j,n,b=0;
	printf("Enter the size of array:");
	scanf("%d",&n);
	printf("\nEnter the elements in the array:\n");
	for (i=1;i<n;i++)
		scanf("%d ",&a[i]);
	for (i=0;i<n;i++)
	{
		for(j=1;j<=a[i];j++)
		{
			if(a[i]%j==0)
			{
				count++;
			}
 			if (count>2)
 			{
		 		printf("%d ",a[i]);
				b++;	
			}	
		count=0;
		}
	}
	printf("\n No. of Composite = %d",b);

}

