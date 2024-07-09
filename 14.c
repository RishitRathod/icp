#include<stdio.h>
int main(){
	int n,i,s=0,l;
	printf("\n enter a no.");
	scanf("%d",&n);
	for(i=0;i<4;i++)
	{
		l=n%10;
		if(i==0||i==3)
		s=s+l;
		n=n/10;
	}
	printf("total=%d",s);
	return 0;
}
