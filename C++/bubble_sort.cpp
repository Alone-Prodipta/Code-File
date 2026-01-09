#include<iostream>
using namespace std;
int main()
{
    int num1=0,rem=0,temp=0,num2=0,min=0,max=0;
    cout<<"Enter any two numbers to find the GCD\n";
    cin>>num1;
    cin>>num2;
    if(num1>num2)
    {
        max= num1;
        min= num2;
    }
    else
    {
        max= num2;
        min= num1;
    }
    while(1)
    {
        rem= max%min;
        if(rem==0)
        {
            cout<<"The Greatest Common Division (GCD) of the two numbers is: "<<min;
            break;
        }
        else
        {
            temp= rem;
            max= temp;
            min= temp;
        }
    }
    return 0;
}