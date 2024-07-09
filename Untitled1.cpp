#include<stdio.h>

int main() {
	// your code goes here
	int i,h,x,y,a[7],z[7],n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    scanf("%d%d%d",&h,&x,&y);
	    z[i]=h-x;
	    a[i]=z[i]+y;
	    if(a[i]<=0)
	    printf("1");
	    else
	    printf("0");
	    printf("\n");
	}
	return 0;
}
