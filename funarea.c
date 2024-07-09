#include<stdio.h>
float cube(int r)
{
	float c;
	c=3.14*r*r;
	return c;
}
void main()
{
	int r;
	printf("enter radius:");
	scanf("%d",&r);
	float z = cube(r);
		printf("\n area=%f",z);
}
