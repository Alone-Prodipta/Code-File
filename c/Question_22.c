//Question 22
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdbool.h>
void main()
{
	
	char word[100],ch;
	int k=0,st,i=0;
	//clrscr();
	printf("Enter 'U' for uppercase convertion\n");
	printf("Enter 'L' for lowercase convertion\n");
	scanf("%c",&ch);
	switch(ch)
	{
	case 'U':
	{
		printf("Enter any WORD in uppercase");
		scanf("%s",word);
		for(i=0;word[i]!='\0';i++)
		{
			if(islower(word[i])==true)
			{
				k++;
			}
		}
		if(k!=0)
		{
			goto end;
		}
		else
		{
			printf("The lowercase word is\n");
		}
		for(i=0;word[i]!='\0';i++)
		{
			st=(int)word[i]+32;
			printf("%c",(char)st);
		}
		
	}
	break;
	end:
	printf("\n The word is in lowercase");
	case 'L':
	{
		printf("Enter any WORD in lowercase");
		scanf("%s",word);
		for(i=0;word[i]!='\0';i++)
		{
			if(isupper(word[i])==true)
			{
				k++;
			}
		}
		if(k!=0)
		{
			goto endline;
		}
		else
		{
			printf("The uppercase word is\n");
		}
		for(i=0;word[i]!='\0';i++)
		{
			st=(int)word[i]-32;
			printf("%c",(char)st);
		}
		
	}
	break;
	endline:
	printf("\n The word is in uppercase");
	default:
	{
		printf("Wrong input");
	}
	}
	getch();
}