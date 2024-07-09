#include<stdio.h>
int main(){
	int num,p,q,r,s,t;
	printf("enter no.");
	scanf("%d",&num);
	p=num%10;
	num=num/10;
	q=num%10;
	num=num/10;
	r=num%10;
    num=num/10;
    s=num%10;
    num=num/10;
    t=num%10;
    printf("%d%d%d%d%d",p,q,r,s,t);
	return 0;	
}
