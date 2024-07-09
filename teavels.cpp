#include<stdio.h>
int main()
{
	int km,cost,fcost;
	printf("enter how many km a person travels");
	scanf("%d",&km);
	if(km<=20)
	{	cost=km*10+50;
		printf("%d",cost);
    }
	else
	{   km=km-20;
		cost=km*7+100+250;
		printf("%d",cost);
	}
	return 0;
}

