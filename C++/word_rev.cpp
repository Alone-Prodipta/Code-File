#include<iostream>
#include<string>
using namespace std;
void rev(string &sen)
{
    char word[100]="";
    int len,i=0,j=0;
    len=sen.length();
    for(i=0;i<len;i++)
    {
        for(j=0;i<len;j++,i++)
        {
            if(sen[i]==' '||sen[i]=='\0')
            {
                break;
            }
            word[j]=sen[i];
        }  
        while(j>0)
        {
            j--;
            sen[i-j-1]=word[j];
        }
    }      
}

int main()
{
    string s;
    cout<<"Enter any word:\n";
    getline(cin,s);
    rev(s);
    cout<<"reversed word:\n"<<s<<endl;
    return 0;
}