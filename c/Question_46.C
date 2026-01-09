#include<stdio.h>
#include<conio.h>
int main()
{
	auto fact=1,i=0;
	int n;
	//clrscr();
	printf("Enter any number to find its factorial:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("The factorial of the number is: %d",fact);
	return 0;
	getch();
}

