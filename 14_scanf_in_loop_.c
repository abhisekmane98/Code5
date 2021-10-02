#include<stdio.h>
int main()
{
	char s[40];
	int a,i;
	float b;
	for(i=0;i<=2;i++)
	{
		fflush(stdin);
		scanf("%[^k]%*c%dk%f",s,&a,&b);
		printf("%s,%d,%f\n",s,a,b);
	}
	
}
