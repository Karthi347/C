#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],mul[10][10],r,c,i,j,k;
	printf("Enter number of rows:");
	scanf("%d",&r);
	printf("Enter number of columns:");
	scanf("%d",&c);
	printf("Enter elements in the 1st matrix\n");
	for (i=0;i<r;i++)
		for (j=0;j<c;j++)
			{
			printf("Enter a[%d][%d]:",i+1,j+1);
			scanf("%d",&a[i][j]);
			}
	printf("Enter elements in the 2st matrix\n");
	for (i=0;i<r;i++)
		for (j=0;j<c;j++)
			{
			printf("Enter b[%d][%d]:",i+1,j+1);
			scanf("%d",&b[i][j]);
			}
	printf("multiply of the matrix=\n");    
	for(i=0;i<r;i++)       
		for(j=0;j<c;j++)    
		{	    
			mul[i][j]=0;    
			for(k=0;k<c;k++)    
			{    
				mul[i][j]+=a[i][k]*b[k][j];    
			}    
		}        
		for(i=0;i<r;i++)    
		{
			for(j=0;j<c;j++)    
			{    
			printf("%d\t",mul[i][j]);    
			}    
			printf("\n");
		}
	return 0;  
}
