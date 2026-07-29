#include <stdio.h>

#define N 3   // Change this for number of variables

void gaussElimination(float a[N][N], float b[N]) 
{
    int i, j, k;
    float ratio;
    float x[N];

    // Forward elimination
    for (i = 0; i < N - 1; i++) 
    {
        for (j = i + 1; j < N; j++) 
        {
            ratio = a[j][i] / a[i][i];
            for (k = i; k < N; k++) 
            {
                a[j][k] -= ratio * a[i][k];
            }
            b[j] -= ratio * b[i];
        }
    }

    // Back substitution
    x[N - 1] = b[N - 1] / a[N - 1][N - 1];
    for (i = N - 2; i >= 0; i--) 
    {
        x[i] = b[i];
        for (j = i + 1; j < N; j++) 
        {
            x[i] -= a[i][j] * x[j];
        }
        x[i]= x[i]/a[i][i];
    }

    // Print solution
    printf("Solution:\n");
    for (i = 0; i < N; i++) 
    {
        printf("x[%d] = %.2f\n", i + 1, x[i]);
    }
}

void main() 
{
    // Example system:
    // x + y + z = 6
    // 2x + 3y + 4z = 20
    // x - y + z = 2

    float A[N][N] = 
    {
        {1, 1, 1},
        {2, 3, 4},
        {1, -1, 1}
    };

    float B[N] = {6, 20, 2};

    gaussElimination(A, B);
}
