#include<stdio.h>
int main()
{
int i,j,k,l;
char n;

int m;
//printf("%d",t);
for(i=72;i>=65;i--)
{
   for(j=65;j<=i;j++)
{
printf("%c",j);
}
for(k=i-70;k<=72-i;k++)
{
  printf(" ");
}
for(j=i;j>=65;j--)
{
	if(j==72)
	{
		continue;
	}
printf("%c",j);
}
printf("\n");
}
for(i=66;i<=72;i++)
{
	for(j=65;j<=i;j++)
	{

		printf("%c",j);
	}
	for(k=72-i;k>=1;k--)
	{
		printf(" ");
	}
	for(int m=70;m>=i;m--)
	{
		printf(" ");
	}
	for(int y=i;y>=65;y--)
	{
		if(y==72)
		{
			continue;
		}
		printf("%c",y);
	}

	printf("\n");
}


}
