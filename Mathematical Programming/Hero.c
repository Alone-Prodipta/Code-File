#include<stdio.h>
void main()
{
    printf("Calculate the root of 27\n");
    int y=27,i=0,n=0;
    float x1= 0.0,fx=0.0,x=0.0;
    printf("Enter the initial guess:\n");
    scanf("%f",&x);
    printf("Enter the iteration number:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        fx= x*x+y;
        x1= fx/(2*x);
        printf("%d\t%f\t%f\n",i,x,x1);
        x=x1;
    }
    printf("The root of 27 is %f\n",x);
}