#include <stdio.h>

int main() {
    int a,b,i,n,c;
    for(i=1;i<=n;i++)
    {
    scanf("%d%d%d",&a,&b,&c);
    if(c==(a+b) || b==a+c || a==b+c)
    printf("YES");
    else
    printf("NO");
}
	// your code goes here
	return 0;
}


