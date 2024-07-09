#include<stdio.h>
int max(int,int);
void main()
{
	int a,b,big;
	printf("\n enter two numbers");
	scanf("%d%d",&a,&b);
	big=max(a,b);
	printf("\nbigger number =%d",big);
}
int max(int x,int y)
{
	if(x>y)
	return x;
	else
	return y;
}                                                    
