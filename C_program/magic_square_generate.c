#include<stdio.h>
#include<stdlib.h>
void main()
{
    int i=0,j=0,k=0,n=0;
    int ar[100][100];
    printf("Enter the size of the array(in odd number)\n");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("Program terminates.");
        exit(1);
    }
    i=0;
    j= n/2;
    for(k=0;k<n*n;k++)
    {
        ar[i][j]= k+1;
        i--;
        j++;
        if(i<0)
        {
            i=n-1;
        }
        if(i>=n)
        {
            i=0;
        }
        if(j<0)
        {
            j=n-1;
        }
        if(j>=n)
        {
            j=0;
        }
        if(ar[i][j]!=0)
        {
            i= i+2;
            j--;
        }
        if(i>=n)
        {
            i= i-n;
        }
        if(j<0)
        {
            j= n-1;
        }
    }
    printf("The generated matrix is:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("|_%d_|",ar[i][j]);
        }
        printf("\n");
    }
    system("pause");
}