//Question 18
#include<stdio.h>
#include<conio.h>
void main()
{
	
	int  n,i=1;
	float sum=0.0;
	//clrscr();
	printf("Enter how many numbers");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+(1.0/i);
		//printf("%.2f\n",sum);	
	}
	printf("The sum of the series is :\n");
	printf("%.2f",sum);
	getch();
}
