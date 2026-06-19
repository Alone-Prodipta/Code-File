#include <stdio.h>
#include <math.h>
void main()
{
    int h = 1, i = 0;
    float c = 0.0, f = 0.0, d = 0.0, sum = 0.0;
    float y[100], diff = 1.0, add = 0.0;
    printf("f(x)= dx/(1+x) 5->0\n");
    printf("x   |   y\n");
    for (i = 0; i <= 5; i += h)
    {
        c = 1.0 / (1 + i);
        y[i] = c;
        printf("%d   |   %.3f\n", i, y[i]);
    }
    /*____________Simpson 1/3rd rule____________*/

    for (i = 0; i <= 5; i += 2)
    {
        if (i != 0 && i != 5)
        {
            f = f + y[i];
        }
    }
    for (i = 1; i <= 4; i += 2)
    {
        d = d + y[i];
    }
    sum = (y[0] + y[5] + 2 * f + 4 * d) * (1.0 / 3.0);
    printf("The value of simpson 1/3rd rule: %.2f", sum);

    /*____________Trapizoidal rule____________*/
    f= 0.0;
    for (i = 0; i <= 5; i++)
    {
        if (i != 0 && i != 5)
        {
            f = f + y[i];
        }
    }
    sum = 0.0;

    sum = (y[0] + y[5] + 2 * f) * (h / 2.0);
    printf("\nThe value of Trapizoidal rule: %.3f", sum);
}
