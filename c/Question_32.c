  //Question 32
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,row,col,mat1[100][100],mat2[100][100],add[100][100];
	//clrscr();
	printf("Enter the rows and columns");
	scanf("%d, %d",&row);
	scanf("%d, %d",&col);
	printf("Enter the elements in  the first matrix\n");
	for(i=0 ;i<row; i++)
	{
	       for(j=0; j<col; j++)
	         {
		scanf("%d",&mat1[i][j]);
	          }
	}
	printf(" First matrix is:\n");
	for(i=0 ;i<row; i++)
	{
	       for(j=0; j<col; j++)
	         {
		printf("%d",mat1[i][j]);
	          }
	     printf("\n");
	}
	printf("Enter the elements in  the second matrix\n");
	for(i=0 ;i<row; i++)
	{
	       for(j=0; j<col; j++)
	         {
		scanf("%d",&mat2[i][j]);
	          }
	}
	printf(" Second matrix is:\n");
	for(i=0 ;i<row; i++)
	{
	       for(j=0; j<col; j++)
	         {
		printf("%d",mat2[i][j]);
	          }
	     printf("\n");
	}
	printf("Adding the two matrix:\n");
	for(i=0 ;i<row; i++)
	{
	       for(j=0; j<col; j++)
	         {
		add[i][j]=mat1[i][j]+mat2[i][j];
	        }
	}
	for(i=0 ;i<row; i++)
	{
	       for(j=0; j<col; j++)
	         {
		printf("%d",add[i][j]);
	          }
	     printf("\n");
	}
	getch();
}