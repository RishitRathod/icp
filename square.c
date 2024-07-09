#include<stdio.h>
int main(){
	int a,b,c;
	printf("enter value of a");
	scanf("%d",&a);
	printf("enter value of b");
	scanf("%d",&b);
	c=a*a;
	printf("\nsquare of a= %d",c);
	c=a*a*a;
	printf("\ncube of a= %d",c);
    c=b*b;
	printf("\nsquare of b= %d",c);
	c=b*b*b;
	printf("\ncube of b= %d",c);
	return 0;
}
