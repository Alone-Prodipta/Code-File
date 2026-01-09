//Question 41
#include<stdio.h>
#include<conio.h>
int fibbo(int n)
{
	if(n==1)
	{
		return(0);
	}
	else
	{
		if(n==2)
		{
			return(1);
		}
		else
		{
			return(fibbo(n-2)+fibbo(n-1));
		}
	}
}
void main()
{	
	int result,num;
	//clrscr();
	printf("Enter the number of terms in the fibbonacci series:\n");
	scanf("%d",&num);
	result=fibbo(num);
	printf("The %d th term is %d",num,result);
	getch();
}
