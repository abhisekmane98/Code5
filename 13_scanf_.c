#include<stdio.h>
int main()
{
	char s[40];
	int a;
	float b;
	scanf("%[^k]%*c%dk%f",s,&a,&b);
	printf("%s,%d,%f",s,a,b);
}
