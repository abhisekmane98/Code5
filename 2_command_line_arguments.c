#include<stdio.h>
// >2_.exe 2_source.txt 2_target.txt
int main(int argc,char *argv[])
{
	char ch;
	FILE *fs,*ft;
	fs=fopen(argv[1],"r");
	ft=fopen(argv[2],"w");
	
	while( (ch=fgetc(fs))!=EOF )
	{
		fputc(ch,ft);	
	}
	fclose(fs);
	fclose(ft);
}
