#include<stdio.h>
#include<conio.h>
void main()
{
	char sen[100],upr;
	clrscr();
	int i,num;
	printf("Enter any text in lower case\n");
	gets(sen);
	printf("Converting in upper case\n");
	for(i=0;sen[i]!=0;i++)
	{
	     num=(int)sen[i]-32; //if it was to lowercase the ip will be in upper case and +32 instead of -32.
	     printf("%c",(char)num);
	}
	getch();
}
