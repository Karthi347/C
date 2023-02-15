#include<stdio.h>

float mean_function(float array[],int n)
{
	int i;
	float sum=0;
	for(i=0;i<n;i++)
	{
	sum=sum+array[i];
	}
	return (sum/n);
}

float median_function(float a[],int n)
{
	float t;
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				t=a[j];
				a[j]=a[i];
				a[i]=t;
			}
		}
	}
	if(n%2==0)
		return (a[n/2]+a[n/2-1])/2;
	else
		return a[n/2];
}

float mode_function(float a[],int n)
{
	return (3*median_function(a,n)-2*mean_function(a,n));
}

int main()
{
	int i,n;
	float a[100],mean,median,mode;
	printf("Enter the size of the array : ");
	scanf("%d",&n);
	printf("Enter elements in the array : \n");
	for (i=0;i<n;i++)
	{
		printf("element - %d : ",i+1);
		scanf("%f",&a[i]);
	}
	mean=mean_function(a,n);
	printf("\nMean = %f",mean);
	
	median=median_function(a,n);
	printf("\nMedian = %f",median);
	
	mode=mode_function(a,n);
	printf("\nMode = %f",mode);
}




