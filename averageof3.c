#include<stdio.h>
int main(){
	int a,b,c;
	float avg;
	printf("enter value of a,b & c:");
	scanf("%d%d%d",&a,&b,&c);
	avg=(a+b+c)/3;
	printf("average of three numbers=%.2f",avg);
	return 0;
}
