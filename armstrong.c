#include<stdio.h>
int main(){
	int n,l,c,d,s=0;
	printf("enter a no");
	scanf("%d",&n);
	d=n;
	while(n>0)
	{
		l=n%10;
		c=l*l*l;
		s=s+c;
		n=n/10;
	}
	printf("sum of cube of each digit=%d",s);
	if(s==d)
	printf("\n armstrong no.");
	else
	 printf("\n not a armstrong no.");
	return 0;
}
