#include<stdio.h>
void main(){
	int x=5,y;
	y=x++ + ++x + ++x + x++;
	printf("%d %d",x,y);
	
	return 0;
}
