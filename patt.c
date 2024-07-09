#include<stdio.h>
int main(){
	int i,j,v=1,p;
	for(i=1;i<=4;i++)
	{
		printf("\n");
		for(p=4;p>v;p--
		)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		v++;
	}
	return 0;
}
