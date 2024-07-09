#include<stdio.h>
int main(){
	int i,j,a[2][2],b[2][2],c[2][2];
	printf("enter matrix a:");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("enter a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter matrix b:");
		for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("enter a[%d][%d]: ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	printf("martrix a = \n");
		for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("martrix b = \n");
		for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	printf("total =\n");
		for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			c[i][j]=(a[i][j]*b[i][j])+(a[i][j]*b[i][j]);
			printf("%d  ",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}  
