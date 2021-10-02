#include<stdio.h>
int main()
{
	char s[40];
//	FILE *fp;
//	fp=fopen("11_data.txt","r");
	while( fgets(s,sizeof(s),stdin)!=NULL)
	{
		printf("%s",s);
	}
	
}
