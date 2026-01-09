#include<stdio.h>
#include<conio.h>
extern int sum=0;
void main()
{
	int a,b;
	clrscr();
	printf("Enter any two numbers\n");
	scanf("%d",&a);
	scanf("%d",&b);
	sum=a+b;
	printf("The sum of the two numbers is: %d",sum);
	getch();
}

