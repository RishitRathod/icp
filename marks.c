#include<stdio.h>
int main(){
	int h,g,s,m,e;
	float avg;
	printf("\n enter history marks");
	scanf("%d",&h);
	printf("\n enter geography marks");
	scanf("%d",&g);
	printf("\n enter social science marks");
	scanf("%d",&s);
	printf("\n enter maths marks");
	scanf("%d",&m);
	printf("\n enter english marks");
	scanf("%d",&e);
	avg=(h+g+s+m+e)/5;
	printf("\n average=%f",avg);
    if(avg>=70)
    printf("\ndistinction");
    else if(avg>=60)
    printf("first class");
    else if(avg>=50)
    printf("second class");
    else if(avg>=40)
    printf("third class");
    else
    printf("fail");
    
	return 0;
}
