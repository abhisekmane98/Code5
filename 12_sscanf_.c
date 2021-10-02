#include<stdio.h>
int main()
{
	int a;
	float b;
	char s[]="bonapart is k34k8.3",s1[20],s2[20];
	sscanf(s,"%[^k]%*c%dk%f",s1,&a,&b);
	printf("%s,%d,%f",s1,a,b);
}
