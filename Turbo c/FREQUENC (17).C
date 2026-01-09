
#include<stdio.h>
#include<conio.h>
void main()
{
	int ar1[100][100],ar2[100][100],c[100][100],i,j,r1,r2,c1,c2,k=0;
	clrscr();
	printf("Enter the number of rows & columns for matrix1\n");
	scanf("%d\n%d",&r1,&c1);
	printf("Enter the number of rows & columns for matrix2\n");
	scanf("%d\n%d",&r2,&c2);

	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&ar1[i][j]);
		}
		printf("\n");
	}
	printf("The given matrix1 is\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("%d ",ar1[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			scanf("%d",&ar2[i][j]);
		}
		printf("\n");
	}
	printf("The given matrix2 is\n");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("%d ",ar2[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			c[i][j]=0;
		}
	}

	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			for(k=0;k<=r2;k++)
			{
				c[i][j]+=ar1[i][k]*ar2[k][j];
			}
		}
	}
	printf("The final matrix is\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}

    getch();
}