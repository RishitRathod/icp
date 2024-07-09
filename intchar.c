#include<stdio.h>
int main(){
	int age;
	char gender;
	float height;
	printf("enter gender, age and height");
	scanf("%c%d%f",&gender,&age,&height);
	printf("\ngender =%c",gender);
	printf("\nage =%d",age);
	printf("\nheight =%.2f",height);
	return 0;
	}
