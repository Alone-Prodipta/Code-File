#include<stdio.h>
void main()
{
    int i=0,j=0,n;
    printf("Enter how many numbers:\n");
    scanf("%d",&n);
    printf("Printing the triangle:\n");
    for(i=1;i<=n;i++)
    {
        for(j=i;j>=1;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    system("pause");
}