#include<stdio.h>
int main(){
	float c,f;//c=centigrate,f=fahrenheit
	printf("enter centigrade");
	scanf("%f",&c);
	f =(c*9/5) + 32;
	printf("fahrenheit=%.2f",f);
	
}
