#include<stdio.h>
int main(){
	int age;
	char gender,married;
	printf("\nenter whether driver is married");
	scanf("%c",&married);
	if(married=='m')
	printf("\neligible");
	else
	{
	printf("\nenter age");
	scanf("%d",&age);
	printf("\nenter gender");
	scanf(" %c",&gender);
	if(gender=='m' && age>30  )
	printf("\neligible");
	else 
	if(gender=='f' && age>25 )
	printf("\neligible");
	else
	printf(" \nnot eligible");
}
	return 0;
}
