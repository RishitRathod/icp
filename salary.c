#include<stdio.h>
int main(){
	int bs;
	float hra,da,gs;
	printf("\n enter salary");
	scanf("%d",&bs);
	da=bs*0.50;
	printf("\ndearness allowance=%.2f",da);
	hra=bs*0.10;
	printf("\nhouse rent allowance=%.2f",hra);
	gs=bs+da+hra;
	printf("\ntotal =%f",gs);
	
	return 0;
}
