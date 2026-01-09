#include <stdio.h>
#include<conio.h>
void main() 
{
    int n;
    clrscr();
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i++)
    {
        int isPrime = 1;
        for (int j = 2; j * j <= i; j++) 
        {
            if (i % j == 0) 
            {
                isPrime = 0;
                break;
            }
        }
        if (isPrime==0)
        {
            printf("%d is a prime number\n ", i);
        }
    }
    printf("\n");
    getch();
}