#include <stdio.h>
// //Printing the interpolation table
// /*
// Take the input as:
// Enter the numbers of y=fx(): 
// 1
// 2
// 11
// 34
// 77
// 146*/
int fact(int num) //factorial function
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
    int i, j, x[10]={0,1,2,3,4,5,6};
    int dy[6][6],x0,n=0; 
    printf("Enter the numbers of y=fx(): \n");
    scanf("%d", &n);
    printf("Enter the elements of y=fx(): \n");
    for(i=0; i< n; i++)
    {
        scanf("%d",&dy[i][0]);
    }
    x0= dy[0][0];
    for(j = 1; j < n; j++) 
    { 
        for(i = 0; i < (n - j); i++) 
        {
            dy[i][j] = dy[i + 1][j - 1] - dy[i][j - 1];
        }
    }
    printf("x\ty\tDy\tD2y\tD3y\tD4y\tD5y\n");
    printf("---------------------------------------------------------\n");
    for(i = 0; i < n; i++) 
    {
        printf("%d\t",x[i]);
        for(j = 0; j < (n - i); j++) 
        {
            printf("%d\t", dy[i][j]);
         }
        printf("\n");
    }
    printf("Calculating the forward differnece:\n");
    int h = 1;
    float const_x = 0.5, result = 0.0;
    float u = (const_x - x[0]) / h;
    result = dy[0][0];
    for (int r = 1; r < n; r++)
    {
        float term = 1.0;
        for (int m = 0; m < r; m++)
        {
            term= term*(u - m);
        }
        result= result+ term * dy[0][r] / fact(r);
    }
    printf("%.3f", result);
    result = 0.0;
    printf("\nCalculating the backward difference:\n");
    float const_xb = 1.5;
    float u_b = (const_xb - x[n - 1]) / h;
    result = dy[n - 1][0];
    for (int r = 1; r < n; r++)
    {
        float term = 1.0;
        for (int m = 0; m < r; m++)
        {
            term = term * (u_b + m);   // correct backward product
        }
        result = result + (term * dy[n - 1 - r][r]) / fact(r);
    }
    printf("%.3f", result);

}