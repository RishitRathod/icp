#include<stdio.h>
int main(){
	int a,b,c;
	printf("enter value of a,b,c");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a>b && a>c)
	printf("a is eldest");
	else
	if(b>a && b>c)
	printf("b is eldest");
	else 
	if(c>a && c>b)
	
	printf("c is eldest");
	return 0;	
}
