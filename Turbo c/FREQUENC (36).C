#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{       clrscr();
	int a,b,max,min;
	printf("enter the first number\n");
	scanf("%d",&a);
	printf("enter the second number\n");
	scanf("%d",&b);
	max=((a+b)+abs(a-b))/2;
	min=((a+b)-abs(a-b))/2;
	printf("%d is the greatest number\n",max);
	printf("%d is the smallest number",min);
	getch();
}