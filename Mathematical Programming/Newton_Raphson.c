#include<stdio.h>
#include<math.h>
void main()
{
    float x0,x1,f0,f1,df0,df1,hn;
    int i,n,k=0;
    printf("Enter the initial guess: ");
    scanf("%f",&x0);
    printf("Enter the number of iterations: ");
    scanf("%d",&n);
    printf("n\tx0\tf(x0)\tf'(x0)\thn\tx1\n");
    for(i=0;i<n;i++)
    {
        // f0=x0*x0-2; // Example function f(x) = x^2 - 2
        // df0=2*x0;   // Derivative f'(x) = 2x
        f0=3*x0-cos(x0)-1;// Example function f(x) = x^3 - cos(x) - 1
        df0=3+sin(x0); // Derivative f'(x) = 3x^2 + sin(x)
        hn=-(f0/df0);
        x1=x0+hn; // Newton-Raphson formula
        printf("%d\t%.2f\t%.3f\t%.3f\t%.3f\t%.3f\n",i,x0,f0,df0,hn,x1);
        x0=x1; // Update x0 for next iteration
        if(x0 == x1)
        {
            k=1;
            continue;
        }
    }
    if(k==1)
    {
        printf("The root is: %.3f\n",x1);
    }
}
       