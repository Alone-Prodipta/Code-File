//Question 13
#include<stdio.h>
#include<conio.h>
void main()
{
	
	int  n,i=1;
	//clrscr();
	printf("Enter how many numbers");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			printf("%d is the factors of the number %d\n",i,n);
		}
	}
	getch();
}
