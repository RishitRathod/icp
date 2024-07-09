#include<stdio.h>
int main()
{
	int a,b,d,e,g;
	float f;
	printf("how many numbers do you want to print");
	scanf("%d",&a);
	
	
    char x[100];
	char y[100]; 
	char c[100];
	
	for(d=0;d<a;d++)
	{
		scanf("%d",&c[d]);
		
	}
e=0;
g=0;

	for(d=0;d<a;d++)
	{
	
	if(c[d]%2==0)
	{
	x[e]=c[d];
	e++;
	
	}
	else
	{
	y[g]=c[d];
	g++	;
	}
	}

	printf("no. of even no.s are = %d\n",e);
	printf("no. of odd no.s are = %d\n",g);

	printf("these are the even no.s\n");
	for(d=0;d<e;d++)
	{
		printf("%d\n",x[d]);
	}
	printf("\n");
	printf("\n");
	
	printf("these are the odd no.s\n");
	
		for(d=0;d<g;d++)
	{
		printf("%d\n",y[d]);
	}
}
