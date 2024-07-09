#include<stdio.h>
int main(){
	int ser;
	char gen,qu;
	printf("enter gender");
	scanf("%c",&gen);
	printf("\nenter qualification");
	scanf(" %c",&qu);
	printf("\nenter years of service");
	scanf("%d",&ser);
	if(gen=='m')
	{
		if(ser>=10 && qu=='p')
		printf("salary=15000");
		else if(ser>=10 && qu=='g')
		printf("salary=10000");
		else if(ser<10 && qu=='p')
		printf("salary= 10000");
		else if(ser<10 && qu=='g')
		printf("salary= 7000");		
	}
	else {
		
		if(ser>=10 && qu=='p')
		printf("salary=12000");
		else if(ser>=10 && qu=='g')
		printf("salary=9000");
		else if(ser<10 && qu=='p')
		printf("salary= 10000");
		else if(ser<10 && qu=='g')
		printf("salary= 6000");	
		
	}
	

  return 0;
}
