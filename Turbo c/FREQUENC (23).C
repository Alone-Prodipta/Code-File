#include<stdio.h>
#include<conio.h>
void main()
{
	int ar[100][100],i,j,r,k=0,left=0,right=0;
	clrscr();
	printf("Enter the number of rows to find the diagonal of a matrix\n");
	scanf("%d\n",&r);
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
			scanf("%d",&ar[i][j]);
		}
		printf("\n");
	}
	printf("The given matrix is\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("%d",ar[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
			if(i==j)
			{
				left=left+ar[i][j];
			}
			else if((i+j)==(r-1))
			{
				right=right+ar[i][j];
			}
		}
	}
	printf("The sum of left diagonal is: %d\n",left);
	printf("The sum of right diagonal is: %d",right);
	getch();
}