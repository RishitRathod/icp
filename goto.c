#include<stdio.h>
int main(){
	int no,s=0,k=0;
	printf("enter a number where you want to stop");
	scanf("%d",&no);
	loop:
	s=s+1;
	if(s<=no)
	{
	k=k+s;   
    goto loop;
    }
    printf("sum=%d",k);
	return 0;
}
