#include<stdio.h>
#include<string.h>
void main()
{
    char find[100],sen[100],word[100]="",ch;
    int i=0,j=0,h=0,k=0,m=0,end=0;
    printf("Enter any sentence:\n");
    fgets(sen,sizeof(sen),stdin);
    printf("Enter the word you want to find:\n");
    scanf("%s",find);//entering the word to be find.
    int flag;
    for(i=0;sen[i]!='\0';i++);//Calculating the length of the string.
    for(m=0;find[m]!='\0';m++);//calculating the length of the word to be find.
    end= i-m+1;
    k=0;
    for(j=0;j<end;j++)
    {
        flag=0;//true;
        for(h=0;h<m;h++)
        {
            if(find[h]!=sen[j+h])
            {
                flag=1;//false
                break;
            }
        }
        if(flag==0)
        {
            k++;
        }
    }
    printf("%d",k);    
    system("pause");
}