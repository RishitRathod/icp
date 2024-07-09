#include<stdio.h>
int main(){
	int h,n,i;
	int k[100];
	int max=1000;
	printf("enter how many numbers you want to enter");
	scanf("%d",&h);
	for(i=0;i<h;i++)
	{
		printf("enter number");
		scanf("%d",&k[i]);
	}
	for(i=0;i<h;i++)
	{
		if(k[i]<max)
		 max=k[i];
	}
	printf("minimum %d",max);
	return 0;
	
}
