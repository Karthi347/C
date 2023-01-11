
#include<stdio.h>
float large(float a[100], int n);
int main()
{
 float a[100], res;
 int i, n;
 printf("Enter n:\n");
 scanf("%d", &n);
 for(i=0;i< n;i++)
 {
  printf("a[%d]=",i);
  scanf("%f", &a[i]);
 }
 res = large(a,n);
 printf("Large = %f", res);
 return 0;
}
float large(float a[10], int n)
{
 float lg = a[0];
 int i;
 for(i=0;i< n;i++)
 {
  if(a[i]>lg)
  {
   lg = a[i];
  }
 }
 return(lg);
}
