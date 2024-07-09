#include<stdio.h>
int main(){
	int i,j,p,v=1;
	for(i=72;i>65;i--)
	{
	
		printf("\n");
		for(j=65;j<i;j++)
		{
			
			printf("%c",j);
		}
		for(p=2;p<=v;p++)
		{
			printf("  ");
		}
		for(j=i-1;j>=65;j--)
		{
			if(j==71){
				continue;
			}
			printf("%c",j);
		}
	v++;
	}
	return 0;
}

