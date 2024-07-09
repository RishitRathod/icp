#include<stdio.h>
int main(){
	int a,b,c,d,e;
	printf("enter salary of a,b,c,d,e");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	if(a>b && a>c && a>d && a>e)
	printf("a=%d",a);
	else
	if(b>c && b>d && b>e)
	printf("b=%d",b);
	else
	if(c>d && c>e)
	printf("c=%d",c);
	else
	if(d>e)
	printf("d=%d",d);
	else
	printf("e=%d",e);
	return 0;
}
