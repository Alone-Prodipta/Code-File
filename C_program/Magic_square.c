//Checking Magic Square.
#include<stdio.h>
void main()
{
    int n,row=0,col=0,sum_d1=0,sum_d2=0,sum_col=0,sum_row=0,k=0,i=0,j=0;
    int mat[100][100];
    printf("Enter the size of the matrix in the n X n format:\n");
    printf("The matrix have to be a Square Matrix(row=column):\n");
    printf("Enter the value of 'n':\n");
    scanf("%d",&n);
    row=n;
    col=n;
    printf("You want to print %d X %d matrix,fine\n:",n,n);
    printf("Enter the elements of the matrix:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&mat[i][j]);//Entering the elments in the natrix.
        }
    }
    printf("The matrix is:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d\t",mat[i][j]);//Printing the matrix.
        }
        printf("\n");
    }
    //This the main code for checking magic square,It is the key part of the code.
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(i==j)
            {
               sum_d1=sum_d1+mat[i][j];//calculating the sum of left diagonals. 
            }
            if((i+j)==(row-1))
            {
                sum_d2=sum_d2+mat[i][j];//calculating the sum of rigth diagonals.
            }
        }
    }
    if(sum_d1!=sum_d2)
    {
        k=1;//Putting the negetive condition for false input.
    }
    else
    {
        for(i=0;i<row;i++)
        {
            sum_col=0;
            sum_row=0;
            for(j=0;j<col;j++)
            {
                sum_row=sum_row+mat[i][j];//sum of rows.
                sum_col=sum_col+mat[j][i];//sum of columns.
            
            }
           
            if(sum_col!=sum_d1)
            {
                k=1;//Putting the negetive condition for false input.
            }
            else if(sum_row!=sum_d2)
            {
                k=1;//Putting the negetive condition for false input.
            }
            else
            {
                k=0;//Putting the positive condition for right input.
            }
        }
    }
    
    if(k==0)//cheacking if all condition have gone right or not.
    {
        printf("It is a Magic Square.");//if right then k=0 else k=1.
    }
    else
    {
        printf("It is not a Magic Square.");
    }
    system("pause");
}