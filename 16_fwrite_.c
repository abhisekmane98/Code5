#include<stdio.h>
typedef struct
{
	char name[40];
	int id;
}STUDENT;
int main()
{
	STUDENT s[4]={
					{"ruturaj",23},
				    {"kailas",27},
				  	{"samar",33},
				  	{"raj",37}
				 };
//	FILE *fp;
//	fp=fopen("16_data.dat","w");
	fwrite(s,sizeof(s),1,stdout);
//	fclose(fp);
}
