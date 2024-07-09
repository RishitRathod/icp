#include<stdio.h>
int main(){
	int i,j;
	int mat[4][4]={
	{2,5,7,6},{3,9,5,2},{6,1,3,7},{4,7,8,6}	};
	printf("The matrix is :\n");
	for(j=0;j<4;j++)
	{
		printf("\n");
		for(i=0;i<4;i++)
		{
			printf("%d",mat[i][j]);		
		}
	}
}
