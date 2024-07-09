#include<stdio.h>
int main()
{
	char g;
	int age;
	printf("enter gender and age");
	scanf("%c%d",&g,&age);
	if(g=='f')
	{
		if(age>24)
		printf("you are recruted");
		else
		printf("next");
	}
else
   {
   	    if(age>28)
   	    printf("you are recruted");
		else
		printf("next");
   }
	return 0;
}
