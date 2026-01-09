#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{       clrscr();
	int i=1,n=0,flag=0;
	printf("Enter any prime number\n");
	scanf("%i",&n);
	for(i=1;i<=n;i++)//for(i=2;i<=sqrt(n)+1;i++) //for(i=2;i<=(n/2);i++)
	{
		if(n%i==0)
		{
		 flag+=1;	//flag=1;
				// break;
		}
	}
	if(flag==2)             //if(flag==0)
	{
	  printf("%d is a prime number",n);
	}
	else
	{
	   printf("%d is not a prime number",n);
	}
	getch();
}
