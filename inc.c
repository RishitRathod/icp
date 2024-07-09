#include<stdio.h>
int main(){
	int a=5,b;
	b=++a + --a + ++a + a--;
	printf("%d\n%d",a,b);
	}
