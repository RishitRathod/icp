#include<stdio.h>
int main(){
	int a,b,c;
	printf("enter value of a&b");
	scanf("%d%d",&a,&b);
	c=a&b;
	printf("Bitwise and is %d\n",c);
	
	c=a|b;
	printf("Bitwise or is %d\n",c);
	c=a^b;
	printf("Bitwise x0r is %d",c);
	return 0;
}
