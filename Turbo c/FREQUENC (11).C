#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
	FILE *fpt;
	char ch;
	clrscr();
	fpt=fopen("copy.txt","r");
	if(fpt==NULL)
	{
		printf("File not present\n");
		fclose(fpt);
	       //	exit(1);
	}
	else
	{
		printf("Press ! to exit...\n");
		printf("Write some text..\n");
		fpt=fopen("copy.txt","w");
		while(1)
		{
		     // scanf("%c",&ch);
		      ch=getc(stdin);
			fputc(ch,fpt);

			if(ch=='!')
			{
				break;
			}
	      }
		  fclose(fpt);
	}
	getch() ;
}