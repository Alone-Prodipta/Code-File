#include<stdio.h>
#include<conio.h>
void main()
{
	int p=1,i,j,k,l,m,n;
	clrscr();
	printf("Enter number of lines");
	scanf("%d",&n);
	for(i=(64+n);i>=65;i--)
	{
		for(j=65;j<=i;j++)
		{
			printf("%c ",j);
		}
	for(m=3;m<=p;m++)
	{
		printf("  ");
	}
	for(k=i;k>=65;k--)
	{
	       if(k==(64+n))
		printf("\b\b");
	     printf(" %c",k);
	}
	p=p+2;
	printf("\n");
	}
	getch();
}