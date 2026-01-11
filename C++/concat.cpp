//concatination process.
/*Explanation in my C programming repository*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int i=0,j=0;
    string str1,str2;
    char str3[100];
    cout<<"Enter any text:\n";
    getline(cin,str1);
    cout<<"Enter any text:\n";
    getline(cin,str2);

    /*Although we can simple connect two or more strings by giving '+' operator in c++ programming.
    but i have written the function behind that.*/

    for(i=0;str1[i]!='\0';i++)
    {
        str3[i]= str1[i];
    }
    for(j=0;str2[j]!='\0';j++)
    {
        str3[i+j+1]= str2[j];
    }
    str3[i+j+1]='\0';
    cout<<"Printing the text:\n";
    cout<<str3;
    return 0;
}