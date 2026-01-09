//Question 12
#include<stdio.h>
#include<conio.h>
void main()
{
	
	int  n,i=1,k=0;
	//clrscr();
	printf("Enter how many numbers");
	scanf("%d",&n);
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			k=1;
			break;
		}
	}
	if(k==0)
	{
		printf("%d is a prime number",n);
	}
	else
	{
		printf("%d is a composite number",n);
	}
	getch();
}