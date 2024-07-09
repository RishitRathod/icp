#include <stdio.h>

int main(void) {
	// your code goes here
	int n,a,b,c,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    scanf("%d%d%d",&a,&b,&c);
	    if(a+b-c==0 || a-b+c==0 || a-b-c==0)
	    printf("YES");
	    else
	    printf("NO");
	    printf("\n");
	}
	return 0;
}


