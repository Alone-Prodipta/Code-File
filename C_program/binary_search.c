#include<stdio.h>
void main()
{
    int ar[100],i=0,n,ub=0,lb=0,mid=0,k=0,ns;
    printf("Enter how many number:\n");
    scanf("%d",&n);
    printf("Enter the elements in the array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    ub=(n-1);                                           
    printf("Enter the number you want to search:\n");
    scanf("%d",&ns);
    /*Key code starts from here.*/
    while(ub>=lb)
    {
        mid=(ub+lb)/2;
        if(ar[mid]>ns)
        {
            ub=mid-1;
        }
        else if(ar[mid]<ns)
        {
            lb=mid+1;
        }
        else if(ar[mid]==ns)
        {
            k=1;
            break;
        }
    }
    if(k==1)
    {
        printf("Number found at position %d",mid);
    }
    system("pause");
}