#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	FILE *ft;
	int i=0,j=0;
	char ch,*str;
	clrscr();
	str=(char*)malloc(1000*sizeof(char));
	ft=fopen("f1.txt","r");
	if(ft==NULL)
	{
		printf("File not open");
		fclose(ft);
		return 1;
	}
	while(1)
	{
		ch=fgetc(ft);
		str[i++]=ch;
		if(ch=='$')
		{
			break;
		}
		if(i>=1000)
		{
			str=(char*)realloc(str,1000*sizeof(char));
		}
	}
	str[i]='\0';
	fclose(ft);
	ft=fopen("f2.txt","w");
	for(j=i-1;j>=0;j--)
	{
		printf("%c",str[j]);
		fprintf(ft,"%c",str[j]);
	}
	fclose(ft);
	return 0;
	getch();
}

