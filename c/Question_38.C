//Question 38
#include<stdio.h>
#include<conio.h>
void power();
int main()
{
	//clrscr();
	power();
	return 0;
	getch();
}
void power()
{
	int base,power,i,result=1;
	printf("Enter the base: ");
	scanf("%d",&base);
	printf("Enter the power: ");
	scanf("%d",&power);
	for(i=0;i<power;i++)
	{
		result*=base;
	}
	printf("the result is: %d",result);
}

