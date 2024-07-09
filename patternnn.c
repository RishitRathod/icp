#include<stdio.h>
int main(){
	int i,j,r,c,mat[i][j];
     printf("enter row numbers");
     scanf("%d",r);
     printf("enter columns");
     scanf("%d",c);
	printf("The matrix is :\n");
	for(j=0;j<c;j++)
	{
		printf("\n");
		for(i=0;i<r;i++)
		{
			printf("%d",mat[i][j]);		
		}
	}
}
