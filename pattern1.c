#include<stdio.h>
int main(){
	int i,j,n,p,v;
	printf("enter a no");
	scanf("%d",&n);
	v=n;
	for(i=1;i<=n;i++)
	{
		printf("\n");
		for(p=1;p<=v;p++)
		{
			printf("   ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
			printf("     ");
		}
		v--;
	}
	return 0;
}
