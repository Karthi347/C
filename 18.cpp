#include <stdio.h>
int main() 
{
   int a[100],i,n,sum = 0;
   int *p=a;
   printf(" Input the number of elements to store in the array (max 10) : ");
   scanf("%d",&n);
   printf(" Input %d number of elements in the array : \n",n);
   for (i=0;i<n;i++)
      {
	  printf(" element - %d : ",i+1);
	  scanf("%d",&a[i]);
	  }
   for (i=0;i<n;i++) 
   {
      sum = sum + *p;
      p++;
   }
   printf("The sum of array is : %d\n\n", sum);
}
