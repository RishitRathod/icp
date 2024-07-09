//program to implement increment decrement operators
#include<stdio.h>
int main(){
	int a,b;
	printf("enter value of a");
	scanf("%d",&a);
	b=a++ + ++a - ++a;
	printf("a=%d\nb=%d",a,b);
	
	return 0;
}

