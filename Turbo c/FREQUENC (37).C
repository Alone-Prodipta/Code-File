#include<stdio.h>
#include<conio.h>
void main()
{       clrscr();
	int a=0,b=0;
	printf("enter the first number\n");
	scanf("%d",&a);
	printf("enter the second number\n");
	scanf("%d",&b);
	if(a<b)
	  printf("%d is greater than %d",b,a);
	else if(b<a)
	  printf("%d is greater than %d",a,b);
	else
	 printf("both numbers are equal");
	getch();
}
