#include <stdio.h>
//Printing the interpolation table
/*
Take the input as:
Enter the numbers of y=fx(): 
1
2
11
34
77
146*/
int fact(int num)
{
    int factorial=1;
    for(int i=1;i<=num;i++)
    {
        factorial= factorial*i;
    }
    return factorial;
}
void main() 
{
    int i, j, x[10]={0,1,2,3,4,5};
    int dy[6][6],x0; 
    printf("Enter the numbers of y=fx(): \n");
    for(i=0; i< 6; i++)
    {
        scanf("%d",&dy[i][0]);
    }
    x0= dy[0][0];
    for(j = 1; j < 6; j++) 
    { 
        for(i = 0; i < (6 - j); i++) 
        {
            dy[i][j] = dy[i + 1][j - 1] - dy[i][j - 1];
        }
    }
    printf("x\ty\tDy\tD2y\tD3y \tD4y\tD5y\n");
    printf("---------------------------------------------------------\n");
    for(i = 0; i < 6; i++) 
    {
        printf("%d\t",x[i]);
        for(j = 0; j < (6 - i); j++) 
        {
            printf("%d\t", dy[i][j]);
        }
        printf("\n");
    }
    printf("Calculating the forward differnece:\n");
    int u=0,h=1,k=0;
    float const_x=1.5,result=0.0;
    u= (const_x-x0)/h;
    
       result = dy[0][k]+(u*dy[0][k+h])/fact(h)+(u*(u-1)*dy[0][k+h+1])/fact(h+1)+(u*(u-1)*(u-2)*dy[0][k+h+2])/fact(h+2);
    
    printf("%f", result);
}
