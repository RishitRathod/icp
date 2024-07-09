#include<stdio.h>
#include<string.h>

int main()
{
    char f[10000];
	char c[10000];
	int d;
	printf ("enter the string ");
	gets(c);
	gets(f);
    strcat(f,c);
    
    printf("%s\t",f);

	
	
}
