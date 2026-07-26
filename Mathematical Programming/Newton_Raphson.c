#include<stdio.h>
void main()
{
    float x0,x1,f0,f1,df0,df1;
    int i,n;
    printf("Enter the initial guess: ");
    scanf("%f",&x0);
    printf("Enter the number of iterations: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        f0=x0*x0-2; // Example function f(x) = x^2 - 2
        df0=2*x0;   // Derivative f'(x) = 2x
        x1=x0-(f0/df0); // Newton-Raphson formula
        printf("Iteration %d: x = %f\n",i+1,x1);
        x0=x1; // Update x0 for next iteration
    }
}