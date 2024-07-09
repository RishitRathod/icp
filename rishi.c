#include<stdio.h>
int main(){
	int i,j,v;
	for(i=72;i>65;i--)
	{
		printf("\n");
		for(j=65;j<i;j++)
		{
			printf("%c",j);
		}printf("     ");
		
		for(j=i-1;j>=65;j--)
		{
			
			printf("%c",j);
		}
		
	}
	return 0;
}
