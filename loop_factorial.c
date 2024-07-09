#include<stdio.h>
int main()
{
	int i,j,n,sum=0,fact=1;
	printf("enter a number1 : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){//2 3
			fact=fact*j;
			//printf("j & fact %d : %d\n",j,fact);
		}
		sum= fact+sum;
		fact=1;
	//	printf(" i& sum %d : %d\n",i,sum)	;
	}
	
	printf("answer : %d",sum);
	return 0;
}
