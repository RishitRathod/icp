#include<stdio.h>
int main(){
	int a,b,c,d;
	scanf("%d%d%d",&d,&a,&b);	
	switch(d)
	{
	case 1:
		printf("%d",c=a+b);
		break;
	case 2:
			printf("%d",c=a-b);
			break;
	case 3:
		printf("%d",c=a*b);
		break;
	case 4:
		printf("%d",c=a/b);
		break;
		default:
			printf("out of range");
				}
	return 0;	
}
