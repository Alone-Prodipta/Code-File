#include<iostream>
using namespace std;
int main()
{
    int a=0,b=0;
    cout<<"Enter two numbers\n";
    cin>>a;
    cin>>b;
    cout<<"After swapping\n";
    //method 1
    a=a^b;
    b=a^b;
    a=a^b;

    //method 2
    /*a=a-b;
    b=a+b;
    a=a+b;*/

    cout<<a<<"\n";
    cout<<b;
    return 0;
}