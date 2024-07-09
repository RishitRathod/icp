#include<stdio.h>
int main()
{
	int a=1,b=1,c,n,d;
	scanf("%d",&n);
	printf("%d\n",a);
	printf("%d",b);
	
	while(d<n-2)
	{
		
		c=a+b;
		b=a;
		a=c;
		
		d++;
		printf("\n%d",c);
	}
}


