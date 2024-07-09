#include<stdio.h>
int main(){
	int i,j,d;
	for(i=1;i<300;i++)
	{
		d=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			d=d+1;
			
     	}
		if(d<=2)
		printf("\n%d",i);
	   
	}
	return 0;
}
