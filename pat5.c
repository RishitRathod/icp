#include<stdio.h>
void main(){
	int i,j,c=1,n;
	printf("enter no of rows");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("\n");
		for(j=1;j<=i;j++)
		{
			printf(" %d",c);
			c++;
		}
	}
	
}
