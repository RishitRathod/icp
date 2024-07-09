#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	int ba[10]={1,2,3,4,5,6,7,8,9,10},i,c,member,room,sh,oh;
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
	printf("\nenter your name");
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
  int  aa[10]={0,0,0,0,0,0,0,0,0,0};
   for(i=0;i<10;i++) 
   {
    if(member<=10)
    {
    	
	    room=ba[i];
	    aa[i]=ba[i];
	    
	
	break;
  }
    else
    if(member<=20)
        room=ba[5];
    else
	    room=ba[8];
   }

	 printf("\nallocated room =%d",room);   
    goto details;    
			return 0;
}
