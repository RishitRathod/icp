#include<stdio.h>
#include<math.h>
int main(){
	int a;
	float sq;
	printf("enter a no.");
	scanf("%d",&a);
	if(a<9999)
	{
	sq=sqrt(a);	
	}
	printf("square root =%f",sq);
	return 0;
}
