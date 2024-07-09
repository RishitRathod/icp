#include<stdio.h>
int main(){
	int a,b,c,d,e,s=0;
	printf("enter marks of subject a,b,c,d &e");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	if(a<40)
	s=s+1;
		 if(b<40)
	s=s+1;
		 if(c<40)
	s=s+1;
		 if(d<40)
	s=s+1;
		 if(e<40)
	s=s+1;
	if(s==0)
	printf("pass");
	else{
	 if(s<=2)
	printf("atkt");
	else
	printf("fail");
}
	return 0;
}
