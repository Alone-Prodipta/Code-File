#include<iostream>
using namespace std;
int main()
{
    int num1=0,num2=0,rem=0,max=0,min=0,temp=0;
    cout<<"Enter any two numbers to find thier GCD:\n";
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
            cout<<"The (GCD) Greatest Common Division of the two number is: "<<min;
            break;
        }
        else
        {
            temp= min;
            min= rem;
            max= temp;
        }
    }
    return 0;
}