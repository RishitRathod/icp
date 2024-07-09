#include<stdio.h>
int main(){
	int i,j,a[50][50],s=0,n,m;
	scanf("%d%d",&n,&m);
		for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("enter no.s for a:");
			scanf("%d",&a[i][j]);
			s=s+a[i][j];
		}
	}
	printf("total = %d",s);
	return 0;
}

