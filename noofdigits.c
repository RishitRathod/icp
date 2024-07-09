#include<stdio.h>
int main()
{
	int n;
	int coint =0;
	printf("enter a no");
	scanf("%d",&n);
	while(n!=0)
	{
		n=n/10;
		coint++;
	}
	printf("%d",coint);
	return 0;
}
