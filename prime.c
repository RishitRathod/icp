#include<stdio.h>
int main(){
	int a;
	printf("enter a no.");
	scanf("%d",&a);
	if(a%2!=0 && a%3!=0 && a%5!=0 && a%7!=0)
	printf("prime no.");
	else
	printf("not a prime no.");
	
	return 0;
}
