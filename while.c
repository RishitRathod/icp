#include<stdio.h>
#include<conio.h>
int main()
{
	int p,n,count;
	float r,si;
	count =1;
	while(count<=3){
		printf("\n enter value of p,n and r");
		scanf("%d%d%f",&p,&n,&r);
		si=p*n*r/100;
		printf("\n simple interest=Rs.%f",si);
		count = count +1;
	}
	
}
