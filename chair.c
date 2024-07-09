#include<stdio.h>
int main(){
	int chair,cost;
	float cec; //cec=cost of each chair
	printf("enter number of chairs");
	scanf("%d",&chair);
	printf("enter total cost");
	scanf("%d",&cost);
	cec=cost/chair;
	printf("%.2f",cec);
	return 0;
}
