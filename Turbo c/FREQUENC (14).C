#include<stdio.h>
#include<conio.h>
#include<math.h>
void sum();
void even_odd(int);
void prime(int);
void main()
{	clrscr();
       //int i=1;
	printf("\n");
       //for(i=1;i<=10;i++)
	sum();
	getch();
}
void sum()
{
	int x,y,add;
	printf("Enter any two numbers\n");
	scanf("%d\n%d",&x,&y);
       //	for(y=1;y<=x;y++)
       //	{
	 //	printf("+\n");
      //	}
	x++;
	y++;
	add=x+y;
	printf("The sum is:\n");
	printf("%d\n",add);
	even_odd(add);
	prime(add);
}
void even_odd(int num)
{
	if(num%2==0)
	{
		printf("Even\n");
	}
	else if(num%2!=0)
	{
		printf("Odd\n");
	}
}
void prime(int p)
{
	int j=2,k=0;
	for(j=2;j<=sqrt(p)+1;j++)
	{
		if(p%j==0)
		{
		   k=1;
		   break;
		}
	 }
		if(k==0)
		{
		       printf("Prime");
		}
		else
		{
			printf("Not Prime");
		}
	}



