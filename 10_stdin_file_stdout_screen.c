#include<stdio.h>
int main()
{
	char ch;
	while( (ch=fgetc(stdin) )!=EOF )  
	{
		printf("%c",ch);
		getch();
	}
		
		
}
