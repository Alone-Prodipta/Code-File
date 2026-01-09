//Question 21
#include<stdio.h>
#include<conio.h>
void main()
{
	char input;
	//clrscr();
	printf("Enter any input of your choice\n");
	scanf("%c",&input);
	if((int)input>=65 && (int)input<=90)
	{
		printf("It is an upper case alphabet");
	}
	else if((int)input>=97 && (int)input<=122)
	{
		printf("It is an lower case alphabet");
	}
	else if((int)input>=48 && (int)input<=57)
	{
		printf("It is a number");
	}
	else
	{
		printf("It is a special charecter");
	}
	getch();
}