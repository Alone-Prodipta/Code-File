//concat() function.
#include<stdio.h>
#include<string.h>
void main()
{
    int i,j,k;
    char str1[100],str2[100],join[100];
    printf("Enter any text:\n");
    gets(str1);
    printf("Enter any text:\n");
    gets(str2);
    for(i=0;str1[i]!='\0';i++)
    {
        join[i]=str1[i];
    }
    for(j=0;str2[j]!='\0';j++)
    {
        join[i+j+1]=str2[j];//this line is the key code.
    }
    join[i+j+1]='\0';//this line is the key code.
   //atlast print the concatinated array.
    printf("%s",join); 
    system("pause");
}