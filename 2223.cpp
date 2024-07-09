#include<stdio.h>
int main(){
	float s,a,b;
	printf("enter a:");
	scanf("%f",&a);
	printf("enter b:");
	scanf("%f",&b);
	s=((4*a+b)-2*a*b)/100;
	printf("%.2f",s);
	
	return 0;
}
