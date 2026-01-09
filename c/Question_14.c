//Question 14
#include<stdio.h>
#include<conio.h>
void main()
{
	
	int  n,i=1,limit;
	//clrscr();
	printf("Enter a numbers");
	scanf("%d",&n);
	printf("Enter how many number\n");
	scanf("%d",&limit);
	printf("The multuple of %d is \n",n);
	for(i=1;i<=limit;i++)
	{
		printf("%d\n",(n*i));
	}
	getch();
}
	 