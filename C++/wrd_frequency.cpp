#include<iostream>
#include<string>
using namespace std;
int main()
{
    string word,sen;
    int wrd_len=0,len=0,i=0,j=0,end=0,k=0,count=0; 
    cout<<"Enter any sentence\n";
    getline(cin,sen);
    cout<<"Enter the word you want to find\n";
    cin>>word;
    len= sen.length();
    wrd_len= word.length();
    end= (len-wrd_len)+1;
    count=0;
    for(i=0;i<end;i++)
    {
        k=0;
        for(j=0;j<wrd_len;j++)
        {
            if(word[j]!=sen[i+j])
            {
                k=1;
                break;
            }
        }
        if(k==0)
        {
           count++;
        }
    }
    cout<<"The frequency of the word is:\t"<<count;
    return 0;
}
