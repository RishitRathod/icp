#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	int i,c,member,room,sh,oh;
	char name[50];
	for(i=0;i<10;i++)
	{
		if(i<=4)
		{
		c=10;
		printf("\ncapacity of board room %d =%d",i+1,c);
    	}
		else
		if(i<=7)
		{
			c=20;
			printf("\ncapacity of board room %d =%d",i+1,c);
		}
		else
		{
	       c=30;
        	printf("\ncapacity of board room %d =%d",i+1,c);
        }
	}
	details:
	printf("\n enter your name");
	gets(name);
	printf("enter how many members you are");
	scanf("%d",&member);
	printf("enter starting time in sequence of 24 hour");
	scanf("%d",&sh);
	printf("enter step time in sequence of 24 hour");
	scanf("%d",&oh);
	printf("\nname = %s",name);
	printf("\nmembers = %d",member);
	printf("\nstarting time  = %d",sh);
	printf("\nstop time = %d",oh);
	fflush(stdin);
    int ba[5];
    for(i=0;i<5;i++)
    {
    	for(member=0;member<10;member++)
    	{
    		if(member<=10)
    		room=ba[0];
		}
	}
    goto details;
    return 0;
}

