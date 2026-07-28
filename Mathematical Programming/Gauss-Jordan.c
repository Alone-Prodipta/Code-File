#include <stdio.h>
void main()
{
    int i, j, k, n;
    float a[10][11], ratio;

    printf("Enter the number of variables: ");
    scanf("%d", &n);

    printf("\nEnter the coefficients of the augmented matrix:\n");

    for(i = 0; i < n; i++)
    {
        for(j = 0; j <= n; j++)
        {
            printf("a[%d][%d] = ", i + 1, j + 1);
            scanf("%f", &a[i][j]);
        }
    }

    /* Gauss-Jordan Elimination */
    for(i = 0; i < n; i++)
    {
        
        ratio = a[i][i];

        for(j = 0; j <= n; j++)
        {
            a[i][j] = a[i][j] / ratio;
        }

        /* Make all other elements in the current column zero */
        for(k = 0; k < n; k++)
        {
            if(k != i)
            {
                ratio = a[k][i];

                for(j = 0; j <= n; j++)
                {
                    a[k][j] = a[k][j] - ratio * a[i][j];
                }
            }
        }
    }

    printf("\nSolution:\n");

    for(i = 0; i < n; i++)
    {
        printf("x%d = %.2f\n", i + 1, a[i][n]);
    }
}