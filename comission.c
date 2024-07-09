#include<stdio.h>
int main(){
	int samt;
	float com;
	printf("enter sales amount ");
	scanf("%d",&samt);
	if(samt<=500){
	 com=samt*0.05;}	 
	 else{
	 	if(samt>500 && samt<=2000){
		 com=35+50;}
		 else{
		 if(samt>2000 && samt<=5000){
		 
		 com=185+240; }
		 else
		 com=samt*12.5;
	}
	 }
	 printf("comission=%.2f",com);
	 	return 0;
}
