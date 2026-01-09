#include<iostream>
using namespace std;
int main()
{
    int n=0,i=0,mid=0,search=0,ub=0,lb=0,k=0;
    cout<<"Enter how many numbers\n";
    cin>>n;
    int* ar=new int[n];
    cout<<"Enter the elements in the array\n";
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    ub=n;
    lb=0;
    cout<<"Enter the number you want to search\n";
    cin>>search;
    while(lb<=ub)
    {
        mid=(lb+ub)/2;
        if(ar[mid]>search)
        {
            ub=mid-1;
        }
        if(ar[mid]<search)
        {
            lb=mid+1;
        }
        if(ar[mid]==search)
        {
            k=1;
            break;
        }
    }
    if(k==1)
    {
        cout<<"The number is found";
    }
    else
    {
        cout<<"The number is not found";
    }
    return 0;
}