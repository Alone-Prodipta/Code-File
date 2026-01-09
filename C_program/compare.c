#include<stdio.h>
#include<string.h>
void main()
{
    int i=0,n=0;
    char str1[100],str2[100];
    printf("Enter the first string:\n");
    gets(str1);
    printf("Enter the second string:\n");
    gets(str2);
    while(str1[i]!='\0'||str2[i]!='\0')
    {
        if(str1[i]!=str2[i])
        {
            n=str1[i]-str2[i];
            break;
        }
        i++;
    }
    if(n>0)
    {
        printf("string 1 is greater than string 2");
    }
    else if(n<0)
    {
        printf("String 2 is greater than string 1");
    }
    else
    {
        printf("Both the string are equal");
    }
    system("pause");
}