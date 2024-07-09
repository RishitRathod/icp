#include<stdio.h>
int main(){
	int marks;
	printf("enter a no.");
	scanf("%d",&marks);
	if(marks>100)
	printf(" error");
	else
	if(marks<33)
	printf(" fail");
	else 
	if(marks<50)
	printf(" 3rd division");
	else
	if(marks<60)
	printf(" 2nd division");
	else
	printf(" 1st division");
	return 0;
}
