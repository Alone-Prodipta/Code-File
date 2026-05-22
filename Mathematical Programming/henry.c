#include <stdio.h>
//Printing the forward difference table
void main() 
{
    int i, j, x[10]={0,1,2,3,4,5};
    int dy[6][6]; 
    printf("Enter the numbers of y=fx(): \n");
    for(i=0; i< 6; i++)
    {
        scanf("%d",&dy[i][0]);
    }
    
    for(j = 1; j < 6; j++) 
    { 
        for(i = 0; i < (6 - j); i++) 
        {
            dy[i][j] = dy[i + 1][j - 1] - dy[i][j - 1];
        }
    }
    printf("x\ty\tDy\tD2y\tD3y\tD4y\t  D5y\n");
    printf("--------------------------------------------\n");
    for(i = 0; i < 6; i++) 
    {
        printf("%d\n",x);
        for(j = 0; j < (6 - i); j++) 
        {
            printf("%d\t", dy[i][j]);
        }
        printf("\n");
    }
}