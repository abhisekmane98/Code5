#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
	char ch;
	FILE *fp;
	fp=fopen("7_data.txt","r");
	if(fp==NULL)
	{
		printf("file can't be opened");
		exit(1);
	}
	
	while(!feof(fp))
	{
		ch=fgetc(fp);
		fputc(ch,stdout);
	}
}
