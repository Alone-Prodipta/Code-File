#include<stdio.h>
#include<conio.h>
void main()
{
	 clrscr();
	int x=2,y=1,i=1,z,n;
	printf("Enter a number\n");
	scanf("%d",&n);
	printf("2,1,");
	for(i=1;i<=n;i++)
	{
		z=x+y;
		printf("%d,",z);
		x=y;
		y=z;
	}
	printf("\b\b");
	getch();
}