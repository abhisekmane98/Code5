#include<stdio.h>
int main(int argc,char *argv[])
{
	char ch;
	
	while( (ch=fgetc(stdin) )!=EOF )
	{
		fputc(ch,stdout); 
	}
}
