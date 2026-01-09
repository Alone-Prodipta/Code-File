//sum of total numbe of factorials
#include<stdio.h>
#include<conio.h>
void main()
{	int i=1,n=0,fact=1,sum=0;
	clrscr();
	printf("Enter how many numbers of terms");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    fact=fact*i;
	    sum=sum+fact;
	}
	printf("%d is the sum of the total number of factorial",sum);
	getch();
}