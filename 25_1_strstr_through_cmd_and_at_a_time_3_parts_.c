#include<stdio.h>
#include<string.h>
int main(int argc,char *argv[])
{
	int count=0,y,k,i,j;
	char s[50],t[50],*p,*temp;
	for(i=0;i<=argc-1;i++)
	{
		printf("%s\n",argv[i]);
	}
	while(fgets(s,sizeof(s),stdin)!=NULL) // read from fs
	{
		strcpy(t,s);
		printf("%s",t);
		getch();
		while( strstr(t,argv[1] )!=NULL)
		{
			p=strstr(t,argv[1]);
			p=p+strlen(argv[1]);
			strcpy(t,p);
			count++;
		}
		
		if( strlen(argv[2])==strlen(argv[1]) )
		{
			puts("you are in case 1\n");
			for(i=1;i<=count;i++)
			{
				p=strstr(s,argv[1]);
				for(j=0;j<=strlen(argv[2])-1; j++)
				{
					*p=argv[2][j];
				}
			}
		}
		else
		{
			if(strlen(argv[2]) > strlen(argv[1]) )
			{
				puts("you are in case 2\n");
				for(i=1;i<=count;i++)
				{
					p=strstr(s,argv[1]);
					p=p+strlen(argv[1]);
					k=strlen(argv[2])-strlen(argv[1]);
					for(y=strlen(s)-1; &s[y]>=p; y-- )
					{
						s[y+k]=s[y];
					} 
					y++; 
					p=p-strlen(argv[1]); // y=y-strlen(s1) s[y]=argv[2][j];
					for(j=0;j<=strlen(argv[2]-1);j++)
					{
						*p=argv[2][j];
					}
			
				}
				
			}
			else // strlen(argv[2]) < strlen(argv[1])
			{
				puts("you are in case 3\n");
				for(i=1;i<=count;i++)
				{
					p=strstr(s,argv[1]);
					temp=p;
					p=p+strlen(argv[1]);
					k=strlen(argv[1])-strlen(argv[2]);
					for(y=strlen(s)-1; p+k<=&s[y]; p++)
					{
						*p=*(p+k);
					}
					*p='\0'; // *p=NULL;
					
					p=temp;
					for(j=0;j<=strlen(argv[2])-1;j++)
					{
						*p=argv[2][j];
					}
				}
				
			} // 2nd else
			
		} // 1st else
		printf("%s",s);
		
		fputs(s,stdout);
			
		
	} // while
	
}
