#include<stdio.h>
int main(){
	int r;
	float per;
	char gen;
	printf("enter gender");
	scanf("%c",&gen);
	printf("enter roll no.");
	scanf("%d",&r);
	printf("enter percentage");
	scanf("%f",&per);
	printf("%c",gen);
	printf("\n%d",r);
	printf("\n%f",per);
	return 0;
}
