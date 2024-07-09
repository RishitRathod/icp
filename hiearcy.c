#include<stdio.h>
int main(){
	float x,a,k;
	printf("enter value of a and k");
	scanf("%f%f",&a,&k);
//associativity of brackets is high
	x=((k-4)*(a*4))/100;
	printf("%.2f",x);
	return 0;
}
