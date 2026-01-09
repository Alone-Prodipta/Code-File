#include<iostream>
#include<math.h>
#include<ctype.h>
using namespace std;
int sum=0;
void AP();
void GP();
void GP()
{
    int n=0,gp=0,i=1,r=0,a=0;
    cout<<"Enter the limit:\n";
    cin>>n;
    cout<<"Enter the ratio:\n";
    cin>>r;
    cout<<"Enter the first element";
    cin>>a;
    cout<<"The GP series is\n";
    for(i=1;i<=n;i++)
    {
        gp= a*(pow(r,i-1));
        cout<<" "<<gp;
        sum= sum+gp;
    }
    cout<<"\nThe sum of the series is: "<<sum;
}
void AP()
{
    int n=0,ap=0,i=1,d=0,a=0;
    cout<<"Enter the limit:\n";
    cin>>n;
    cout<<"Enter the common difference:\n";
    cin>>d;
    cout<<"Enter the first element\n";
    cin>>a;
    cout<<"The AP series is\n";
    for(i=1;i<=n;i++)
    {
        ap= a+(i-1)*d;
        cout<<" "<<ap;
        sum= sum+ap;
    }
    cout<<"\nThe sum of the series is: "<<sum; 
}
int main()
{
    char ch;
    cout<<"Enter 'A' for AP series and 'G' for GP series\n";
    cout<<"Enter your choice\n";
    cin>>ch;
    switch(std::toupper(ch))
    {
        case 'A':
        {
            AP();
        }
        break;
        case 'G':
        {
            GP();
        }
        break;
        default:
        {
            cout<<"Wrong Choice";
        }
    }
    return 0;
}