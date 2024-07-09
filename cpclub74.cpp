#include <stdio.h>

int main(){
	// your code goes here
    int n,i,a,b,c[100];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%d",&a,&b);
        c[i]=b-a;
    }
    for(i=1;i<=n;i++)
    {
         printf("\n%d",c[i]);
    }
	return 0;
}

