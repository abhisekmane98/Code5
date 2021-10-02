#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char ch;
	fp=fopen("5_data.txt","w");
	
	while(!feof(fp))
	{
		ch=fgetc(fp); // we opened file in w mode and trying to read
		if(ferror(fp))
		{
			puts("Error in reading file");
			exit(1);
		}
		else
			printf("%c",ch);
			
	}
	fclose(fp);
	getch();
	return 0;
}
