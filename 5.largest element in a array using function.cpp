#include <stdio.h>
int Largest(int a[],int n)
{
    int i,lnum;
    lnum = a[0];
    for(i=1;i<n;i++)
    {
        if (lnum<a[i])
        {
            lnum = a[i];
 		}
	}
    return lnum;
}

int main()
{
    int a[100],n,larg,i;
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("Enter the elements in the array:\n");
    for(i=0;i<n;i++)
	{
    	printf("element - %d : ",i+1);
        scanf("%d",&a[i]);
	}
	larg = Largest(a,n);
    printf("Largest number is: %d\n",larg);
    return 0;
}

