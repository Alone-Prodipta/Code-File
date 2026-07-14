#include <stdio.h>
#include <math.h>
void main()
{
    int n=0,k=0;
    float h = 0.01, x0 = 0.0, y0 = 1.0, x_end = 0.02, x[n+1], y[n+1], f=0.00; 
    n = (int)round(x_end / h);
    x[0] = 0.0;
    y[0] = 1.0;
    for (k = 0; k < n; ++k)
    {
        f = pow(x[k], 3) + y[k];
        x[k+1] = x[k] + h;
        y[k+1] = y[k] + h * f;
    }
    printf("%.2f\n", y[n]);
}