#include<stdio.h>
typedef struct
{
	char name[40];
	int id;
}STUDENT;
int main()
{
	STUDENT s;
	while( fread(&s,sizeof(STUDENT),1,stdin)!=0)
	{
		printf("%s,%d\n",s.name,s.id);
	}
}
