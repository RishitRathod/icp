#include<stdio.h>
int main(){
	int p;//principal amount
	float roi,n,si;//roi=rate of interest,n=no. of years
	printf("enter principal amount:");
	scanf("%d",&p);
	printf("enter no. of years:");
	scanf("%f",&n);
	printf("enter rate of interest:");
	scanf("%f",&roi);
	si=p*roi*n/100;
	printf("Simple interest=%.2f",si);
		return 0;
}
