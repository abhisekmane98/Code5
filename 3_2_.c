#include<stdio.h>
#include<stdlib.h>
int main()
{
	char ch;
	FILE *fp;
	fp=fopen("..\3_data.txt","r");
	if(fp==NULL)
	{
		puts("file can't open");
		exit(1);
	}
	while(1)  
	{
		ch=fgetc(fp);
		if(ch==EOF)
			break;
		printf("%c",ch);
	}
	fclose(fp);
}
