#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define e  2.718281828459045
// Define the function f(x)
double func(double x) 
{
    return pow(e,x) - 3*x;
}
// for bijection method both values of a and b should be in opposite sign.
// for regula falsy method both values of a and b should be in opposite sign. 
void main() 
{
    double a = 1.5, b = -1.6 , c;   // initial interval [1,2]
    double tolerance = 0.0001; // stopping condition
    int maxIter = 100, iter = 0;

    // Check if initial interval is valid
    if (func(a) * func(b) >= 0) 
    {
        printf("Invalid interval: f(a) and f(b) must have opposite signs.\n");
        exit(1);
    }

    printf("n\t a\t\t b\t\t c\t\t f(c)\n");

    //while (fabs(func(c)) >= tolerance && iter < maxIter)//regula falsy
    while (fabs(b - a) >= tolerance && iter < maxIter)//bisection
    {
        c = (a + b) / 2.0; // midpoint for bisection method
        //c = (a * func(b) - b * func(a)) / (func(b) - func(a));// fotrula of regula- falsy method
        printf("%d\t %.6f\t %.6f\t %.6f\t %.6f\n", iter, a, b, c, func(c));

        // Check if root found
        if(fabs(func(c)) < tolerance) 
        {
            break;
        }

        // Decide which side to keep
        if (func(a) * func(c) < 0)
        {
            b = c;
        }
           
        else
        {
            a = c;
        }
        iter++;
    }

    printf("\nApproximate root after %d iterations: %.6f\n", iter, c);
}
