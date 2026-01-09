//Question 9
#include<stdio.h>
#include<conio.h>
void main()
{
	
	int  n1,n2;
	//clrscr();
	printf("Enter any two numbers");
	scanf("%d",&n1);
	scanf("%d",&n2);
 	if(n1<n2)
	printf("%d is greater than %d",n2,n1);
	else if(n2<n1)
	printf("%d is greater than %d",n1,n2);
	else
	printf("EQUAL");
	getch();
}