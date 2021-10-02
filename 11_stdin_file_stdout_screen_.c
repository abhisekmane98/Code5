#include<stdio.h>
int main()
{
	int a,c;
	float b;
	char s[45];
	fscanf(stdin,"%[^,]%*c%fk%d",s,&b,&c);
	printf("%s,%f,%d",s,b,c);
}
