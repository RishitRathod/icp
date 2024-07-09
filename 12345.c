#include<stdio.h>
int main(){
	int age;
	char gender;
	printf("\nenter whether driver is married");
	scanf("%c",&married);
	printf("\n enter age");
	scanf("%d",&age)
	if(married == 'f')
	{
		if(age>24)
		printf("person is employed");
		else
		printf("person is not eligible")
	}
	else
	{
		if(age>28)
		printf("person is employed");
    	else
		printf("person is not eligible")
    }
}
	return 0;
}
