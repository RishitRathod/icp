//use of shorthand operator
#include<stdio.h>
#include<conio.h>
int main(){
	int a,b,c,d;
	printf("enter value of a,b,c and d");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	a+=1;
	printf("a=%d\n",a);
	b-=1;
	printf("b=%d\n",b);
	c*=b;
	printf("c=%d\n",c);
	d%=a;
	printf("d=%d",d);
	return 0;
}

