#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc,char *argv[])
{
	int ans,i,a,b;
	char *s[]={"+","-","*","/"}; // pointer array to strings

	sscanf(argv[2],"%d",&a);
	b=atoi(argv[3]);
	
	for(i=0;i<=argc-1;i++)
	{
		printf("%s\n",argv[i]);
	}
	if(argc!=4)
	{
		puts("argc mismatched");
		exit(1);
	}
	
	for(i=0;i<=3;i++)  // change 3
	{
		if(strcmp(argv[1],s[i])==0)  // change 2
			break;
	}
	
	if(i==4) // change 4
	{
		puts("invalid operator");
		exit(2);
	}
	else // i got 'i'
	{
		switch(i)
		{
			case 0:
				ans=a+b;
				break;
			case 1:
				ans=a-b;
				break;
			case 2:
				ans=a*b;
				break;
			case 3:
				ans=a/b;
			
		}
		
	}
	
	printf("%d",ans);
}
