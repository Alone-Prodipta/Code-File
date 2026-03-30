#include<stdio.h>
#include<stdlib.h>
void partition(int ar,int low, int high)
{
    int pivot,temp=0,i=0,j=0;
    pivot= ar[low];
    i= low+1;
    j= high;
    do
    {
        while(ar[i]<=pivot)
        {
            i++;
        }
        while(ar[j]>pivot)
        {
            j--;
        }
        if(i<j)
        {
            temp= ar[low];
            ar[low]= ar[j];
            ar[j]= temp;
        }
    }
    while(i<j);
    return j;
}
void quick(int ar,int low,int high)
{
    int partitionIndex= 0;
    partitionIndex= partition(ar,low,high);
    if(low< high)
    {
        quicksort(ar, low, partitionIndex-1);
        quicksort(ar,partitionIndex+1,high);
    }

}
void main()
{
    int ar[5]= {41,55,77,88,20};
    int n=5;
    quick(ar,0,n-1);
    for( int i=0;i<=5;i++)
    {
        printf("%d\n",ar[i]);
    }
}