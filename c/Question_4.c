#include<stdio.h>
void main()
{
    int ar[100],i=0,n,k=0,ns;
    printf("Enter how many number:\n");
    scanf("%d",&n);
    printf("Enter the elements in the array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    printf("Enter the number you want to search:\n");
    scanf("%d",&ns);
    k=0;
    for(i=0;i<n;i++)
    {
        if(ar[i]==ns)
        {
            k=1;
            break;
        }
    }
    if(k==1)
    {
        printf("Number found");
    }
    else
    {
        printf("Number not found");
    }
}