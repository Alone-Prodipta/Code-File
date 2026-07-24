// #include <stdio.h>
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
    printf("\nCalculating the backward differnece:\n");
    // const_x = 2.8;
    // u = (const_x - x[n - 1]) / h;
    // //printf("u=%.3f\n", u);
    // result = dy[n - 1][0];
    // // printf("result=%.3f\n", result);
    // for (int r = 1; r < n; r++)
    // {
    //     float term = 1.0;
    //     for (int m = 0; m < r; m++)
    //     {
    //         term= term*(u + m);
    //         //printf("term=%.3f\n", term);
    //     }
    //     result= result+ ((term * dy[n - 1][r]) / fact(r));
    //     //printf("result=%.3f\n", result);
    // }
    // printf("%.3f", result);
    double backDiff[20];
        for (i = 0; i < n; i++)
            backDiff[i] = diff[n - 1 - i][i];

        p = (xVal - x[n - 1]) / h;
        sum = backDiff[0];
        fact = 1;
        double pTerm = 1;

        for (i = 1; i < n; i++) {
            pTerm *= (p + (i - 1));
            fact *= i;
            sum += (pTerm * backDiff[i]) / fact;
        }

        printf("\nUsing Newton's Backward Interpolation:\n");
        printf("f(%.2lf) = %.4lf\n", xVal, sum);
}


// #include <stdio.h>

// int main() {
//     int n, i, j, choice;
//     double x[20], y[20][20], diff[20][20];
//     double xVal, h, p, sum, fact;

//     printf("Enter number of data points: ");
//     scanf("%d", &n);

//     printf("Enter values of x (equally spaced):\n");
//     for (i = 0; i < n; i++)
//         scanf("%lf", &x[i]);

//     printf("Enter values of y = f(x):\n");
//     for (i = 0; i < n; i++) {
//         scanf("%lf", &y[i][0]);
//         diff[i][0] = y[i][0];
//     }

//     // Build the difference table (forward differences)
//     for (j = 1; j < n; j++)
//         for (i = 0; i < n - j; i++)
//             diff[i][j] = diff[i + 1][j - 1] - diff[i][j - 1];

//     // Print difference table
//     printf("\nDifference Table:\n");
//     for (i = 0; i < n; i++) {
//         printf("%.2lf\t", x[i]);
//         for (j = 0; j < n - i; j++)
//             printf("%.4lf\t", diff[i][j]);
//         printf("\n");
//     }

//     h = x[1] - x[0];

//     printf("\nEnter the x value to interpolate: ");
//     scanf("%lf", &xVal);

//     printf("Choose method:\n1. Newton's Forward Interpolation (use if xVal is near start)\n");
//     printf("2. Newton's Backward Interpolation (use if xVal is near end)\n");
//     printf("Enter choice: ");
//     scanf("%d", &choice);

//     if (choice == 1) {
//         // Forward interpolation, using first row of difference table
//         p = (xVal - x[0]) / h;
//         sum = diff[0][0];
//         fact = 1;
//         double pTerm = 1;

//         for (i = 1; i < n; i++) {
//             pTerm *= (p - (i - 1));
//             fact *= i;
//             sum += (pTerm * diff[0][i]) / fact;
//         }

//         printf("\nUsing Newton's Forward Interpolation:\n");
//         printf("f(%.2lf) = %.4lf\n", xVal, sum);

//     } else if (choice == 2) {
//         // Backward interpolation, using last diagonal of difference table
//         double backDiff[20];
//         for (i = 0; i < n; i++)
//             backDiff[i] = diff[n - 1 - i][i];

//         p = (xVal - x[n - 1]) / h;
//         sum = backDiff[0];
//         fact = 1;
//         double pTerm = 1;

//         for (i = 1; i < n; i++) {
//             pTerm *= (p + (i - 1));
//             fact *= i;
//             sum += (pTerm * backDiff[i]) / fact;
//         }

//         printf("\nUsing Newton's Backward Interpolation:\n");
//         printf("f(%.2lf) = %.4lf\n", xVal, sum);

//     } else {
//         printf("Invalid choice.\n");
//     }

//     return 0;
// }
