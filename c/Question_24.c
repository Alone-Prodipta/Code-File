//Question 24
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,c,x=0,y=1,z;
	clrscr();
	printf("Enter the number of terms: ");
	scanf("%d",&n);
	for(c=3;c<=n;c++)
	{
		z=x+y;
		printf("%d",z);
		x=y;
		y=z;
	}
	printf("\b\b.");
	getch();
}