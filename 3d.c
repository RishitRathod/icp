#include<stdio.h>
int main()
{
	int n[5][3][3],i,j,k,m[5][3][3];
	for(i=0;i<5;i++)
	{
		for(j=0;j<2;j++)
		{
			for(k=0;k<3;k++)
			{
				printf("enter value for a[%d][%d][%d]",i,j,k);
				scanf("%d",&n[i][j][k]);
			}
		}
	}
	for(i=0;i<5;i++)
	{printf("\n");
		for(j=0;j<2;j++)
		{printf("\t");
			for(k=0;k<3;k++)
			{
				printf("%d",n[i][j][k]);
				printf(" ");
			}
		}
	}
	printf("total ");
	for(i=0;i<5;i++)
	{printf("\n");
		for(j=0;j<2;j++)
		{printf("\t");
			for(k=0;k<3;k++)
			{
				m[i][j][k]+=n[i][j][k];
			}
		}
	}
		for(i=0;i<5;i++)
	{printf("\n");
		for(j=0;j<2;j++)
		{printf("\t");
			for(k=0;k<3;k++)
			{
				printf("%d",m[i][j][k]);
			}
		}
	}
}
