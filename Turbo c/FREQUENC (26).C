#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,l,m,k,n,h;
	clrscr();
	printf("Enter number of lines");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	     for(k=(n-i);k>0;k--)
	     {
		printf(" ");
	     }
	     for(j=1;j<=((2*i)-1);j++)
	     {
		 printf("*");
	     }
	     printf("\n");
	}

	for(l=(n-1);l>=1;l--)
	{
		for(h=0;h<n-l;h++)
		{
			printf(" ");
		}
		for(m=1;m<=((2*l)-1);m++)
		{
			printf("*");
		}
		printf("\n");
	}
	getch();
}
