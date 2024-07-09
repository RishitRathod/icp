#include<stdio.h>
int cube(int x,int f,int q)
{
	int c;
	c=x+f+q;
	return c;
}
void main()
{
	int n,c,s,p;
	printf("enter a no:");
	scanf("%d %d %d",&n,&s,&p);
	int z = cube(n,s,p);
		printf("\n CUBE OF THE NUMBER=%d",z);
}
