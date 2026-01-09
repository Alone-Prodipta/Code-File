#include<iostream>
#include<string>
using namespace std;
int main()
{
    string word;
    int len=0,i=0,j=0;
    cout<<"Enter any word\n";
    cin>>word;
    len= word.length();
    cout<<"Printing the triangle:\n";
    for(i=0;i<len;i++)
    {
        for(j=0;j<=i;j++)
        {
            cout<<word[j];
        }
        cout<<"\n";
    }
    return 0;
}