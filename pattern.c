#include<stdio.h>
void main(){
	int i,j,p,v=0;
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
		if(j==71 || j==70 || j==69 || j==68 || j==67 || j==66)
		printf(" ");
		for(j=i-1;j>=65;j--)
		{
			if(j==71)
				continue;
		printf("%c",j);
		}
	v++;
	}
}

