#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void main()
{       FILE *ft;
	char ch;
	clrscr();
	ft=fopen("n.c","r");
	if(ft==NULL)
	{
		printf("cannot find");
		fclose(ft);
	       //exit(1);
	}
	printf("Enter few lines\n");
	while(1)
	{
		scanf("%c",&ch);
		fputc(ch,ft);
		if(ch=='!')
		{
			break;
		}
	}
	fclose(ft);
	getch();
}
