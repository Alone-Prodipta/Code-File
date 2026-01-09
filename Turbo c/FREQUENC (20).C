//seperate word from sentence
#include<stdio.h>
#include<conio.h>
void main()
{
 char str[100],word[100];
 clrscr();
 int i,j=0;
 printf("Enter any text");
 gets(str);
 for(i=0;str[i]!='\0';i++)
 {
	if(str[i]!=' '&&str[i]!='\0')
	{
		word[j++]=str[i];
	}
	else
	{
		word[j]='\0';
		puts(word);
		j=0;
	}

 }
	puts(word);
 getch();
 }
