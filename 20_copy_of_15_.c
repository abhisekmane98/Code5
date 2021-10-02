#include<stdio.h>
int main()
{
//	FILE *fp;
	char s[40];
//	fp=fopen("11_data.txt","r");
	fgets(s,sizeof(s),stdin);
	{
		printf("%s",s);
	}
	
}
