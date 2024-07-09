#include<stdio.h>
int main(){
	int num,p,q,r,s;
	printf("enter no.");
	scanf("%d",&num);
	p=num%10;
	num=num/10;
	q=num%10;
	num=num/10;
	r=num%10;
    s=p+q+r;
    printf("total=%d",s);
	return 0;	
}
