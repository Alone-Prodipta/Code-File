#include<stdio.h>
void main()
{
    int ar[100],i=0,j=0,n,temp;
    printf("Enter how many number:\n");
    scanf("%d",&n);
    printf("Enter the elements in the array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    /* If we want to arrange in descending oder then the '>' sign will get changed in to '<'
    rest portion remains same*/

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<(n-i)-1;j++)
        {
            if(ar[j]>ar[j+1])
            {
                temp=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=temp;
            }
        }
    }
    printf("The array after modification in ascending oder:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",ar[i]);
    }
    system("pause");
}