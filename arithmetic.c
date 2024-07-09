#include<stdio.h>
int main(){
	int a,b,add,sub,mul,mod;
	float div;
	printf("enter value of a and b");
	scanf("%d%d",&a,&b);
	add=a+b;
	sub=a-b;
	mul=a*b;
	div=a/b;
	mod=a%b;
	printf("addition=%d",add); 
	printf("\nsubtraction=%d",sub);
	printf("\nmultiplication=%d",mul); 
	printf("\ndivision=%.2f",div);
	printf("\nmodulus=%d",mod);
	return 0;
}
