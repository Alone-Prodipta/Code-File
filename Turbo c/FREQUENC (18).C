#include<stdio.h>
#include<conio.h>
void swap(int*,int*);
void main()
{
	//swaping value with pointers.
	int a=5,b=10;
	clrscr();
	swap(&a,&b);
	printf("a=%d,b=%d",a,b);
	getch();
}
void swap(int *x,int *y)
{
	int *t;
	*t=*x;
	*x=*y;
	*y=*t;
}

