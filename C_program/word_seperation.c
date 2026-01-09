//to seperate each words from the string.
#include<stdio.h>
void main()
{
    char sen[100];
    int i=0;
    printf("Enter any word:\n");
    fgets(sen,100,stdin);
    for(i=0;sen[i]!='\0';i++)
    {
        if(sen[i]!=' ')
        {
            printf("%c",sen[i]);//This will be till it find any space.
        }
        else
        {  
            printf("\n");
        }
    }
}