#include<stdio.h>
#include<conio.h>
void main()
{
	int year;
	clrscr();
	printf("Enter any year\n");
	scanf("%d",&year);
	if((year%400)==0)
	{
		if((year%100)==0)
		    printf("it is a leap year");
		else
		    printf("it is not a leap year");
	}
	else if((year%4)==0)
	{
		printf("it is a leap year");
	}
	else
	{
		printf("it is not a leap year");
	}
   getch();
}
