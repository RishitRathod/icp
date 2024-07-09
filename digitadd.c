#include<stdio.h>
int main(){
	int num,p,add;
	printf("enter no.");
	scanf("%d",&num);
	while(num!=0)
	{
	p=num%10;
	num=num/10;
	add=p+add;
    }
    printf("%d",add);
	return 0;	
}
