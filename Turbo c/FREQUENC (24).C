#include<stdio.h>
#include<conio.h>
void main()
{
	int ar[100][100],i,j,r,k=0;
	clrscr();
	printf("Enter the size of rows for nXn matrix");
	scanf("%d",&r);
	printf("Enter the binary elements in the matrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
		       scanf("%d",&ar[i][j]);
		}
	}

	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
			if((i==j)&&(ar[i][j])==1);
			{
				k=1;
			}
		       //	else
			//{
				k=0;
		       //	}
		}
	}
		 if(k==1)
		  {
			for(i=0;i<r;i++)
			{
				for(j=0;j<r;j++)
				{
					printf("%d",ar[i][j]);
				}
				printf("\n");
			}
			printf("The above matrix is an identity matrix");
		   }
		  else
		  {
			printf("Not an identity matrix");
		  }
	getch();
}