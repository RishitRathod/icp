#include<stdio.h>
int main(){
	int k=0,i;
	for(i=1;i<=20;i++)
	{
		if(i%2==0)
		k=k+1;
	}
	printf("even number between 1 to 20=%d",k);
	return 0;
}
