#include<stdio.h>
#include<conio.h>
void pro()
{
	static int c=0;
	c++;
	printf("\nCount=%d\n",c);
	
}
void main()
{
	clrscr();
	pro();
	pro();
	getch();
}
