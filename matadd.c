#include<stdio.h>
int main(){
	int i,j,a[2][2],b[2][2],c[2][2];
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("enter no.s for a:");
			scanf("%d",&a[i][j]);
			
			printf("enter no.s for b:");
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
			c[i][j]=a[i][j]+b[i][j];
			printf("%d  ",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}
