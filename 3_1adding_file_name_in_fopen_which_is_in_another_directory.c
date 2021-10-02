#include<stdio.h>
int main()
{
	char ch;
	FILE *fp;
	fp=fopen("3_data.txt","r");
	while(!feof(fp) )  
	{
		ch=fgetc(fp);
		printf("%c",ch);
	}
	fclose(fp);
}
