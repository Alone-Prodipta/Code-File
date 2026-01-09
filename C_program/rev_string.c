#include<stdio.h>
#include<string.h>
void rev(char *sen);
void main()
{
     char s[100];
    printf("Enter any sentence:\n");
    fgets(s,100,stdin);

    //this segment is to avoid printing of the last word in nwe line.
    if (s[strlen(s) - 1] == '\n')
    {
        s[strlen(s) - 1] = '\0';
    }
   rev(s);
   //printf("%s",s);
   for(int i= strlen(s);i>=0;i--)
   {
         printf("%c",s[i]);
   }
   system("pause");
}
void rev(char *sen)
{
    char  word[100];
    int i=0,j=0,len=0;
    len= strlen(sen);
    for(i=0;i<len;i++)//running till the end of the string.
    {
        for(j=0;i<len;j++,i++)// Identify the word.
        {
            if(sen[i]==' '||sen[i]=='\0')//terminating the word when ' ' and '\0'.
            {
                break;
            }
            word[j]=sen[i];//storing the letters of the word one by one in a temporary array.
        }
        //we are going to access the word one index earlier if j is the length of the word.
        while(j>0)
        {
            j--;
            sen[i-j-1]= word[j];
        }
    }
}




