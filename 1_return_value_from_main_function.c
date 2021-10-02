#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
	int i;
	
	printf("Enter a number");
	scanf("%d",&i);
	
	if(i==2)
		exit(1);
	if(i==3)
		exit(2);
		
	return 0;
}
