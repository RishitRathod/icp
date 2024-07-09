#include<stdio.h>
int main(){
	int a;
	float b;
	a=sizeof(a);
	printf("size of a is %d",a);
	b=sizeof(b);
	printf("\nsize of b is %.2f",b);
	printf("\nsize of char =  %ld",sizeof(char));
	return 0;
}
