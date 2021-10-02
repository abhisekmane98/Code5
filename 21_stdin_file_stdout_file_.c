#include<stdio.h>
typedef struct
{
	char name[40];
	int id;
}STUDENT;

int main()
{
	STUDENT s;
	while(fread(&s,sizeof(s),1,stdin)==1)
	{
		fwrite(&s,sizeof(s),1,stdout);
	}
}
