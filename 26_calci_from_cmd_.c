#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc,char *argv[])
{
	int ans,i,a,b;
	char s[]={'+','-','*','/','\0'};

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
	
	for(i=0;i<=strlen(s)-1;i++)
	{
		if(argv[1][0]==s[i])
			break;
	}
	
	if(i==strlen(s))
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
