#include<stdio.h>
int main()
{
	int p,q;
	float te;
	printf("enter quantity and price per item");
	scanf("%d%d",&q,&p);
	if(q<=1000)
		te=p*q;
	else{
	
	    te=p*q*0.10;
	    te=p*q-te;
	}
	    printf("%.2f",te);
		return 0;
}
