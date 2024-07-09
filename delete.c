#include<stdio.h>
int main(){
	char n[30],ns;
	int a,i;
	printf("enter string");
	gets(n);
	printf("enter the char you want to delete");
	scanf("%c",&ns);
	a=strlen(n);
	for(i=0;i<a;i++)
	{
		if(n[i]==ns)
		continue;
	}
	puts(n);
	return 0;
}
