#include<stdio.h>
#include<string.h>
int main(int argc,char *argv[])
{
	int i,j;
	argv[0]="kailas";
	
	printf("%d\n",argc);
	
	for(i=0;i<=argc-1;i++)
	{
		printf("%s\n",argv[i]);
	}
	
	for(j=0;j<=strlen(argv[1]-1);j++)
	{
		printf("%c",argv[1][j]);
	}
	printf("Abhishek");
}
