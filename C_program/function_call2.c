#include<stdio.h>
#include<string.h>
void uppr(char str[100],int l);
void lwr(char str[100],int l);
int length(char st[100]);
void main()
{
    char ch;
    printf("Enter 'L' for lower case and 'U' for uppercase\n");
    printf("Enter your choice:\n");
    scanf("%c",&ch);
    switch(ch)
    {
        case 'U':
        {
            char str1[100];
            int a=0,size=0;
            printf("Enter any text in lower case:\n");
            gets(str1);
            fgets(str1,sizeof(str1),stdin);
            str1[strcspn(str1, "\n")] = '\0';
            size=length(str1);
            //printf("%d\n",size);
            for(a=0;a<=size;a++)
            {
                if(str1[a]>=65&&str1[a]<=90)
                {
                    printf("Already in upper case letter.");
                    break;
                }
            }  
            uppr(str1,size);
        }
        break;
        case 'L':
        {
             char str2[100];
            int a=0,size2=0;
            printf("Enter any text in upper case:\n");
            gets(str2);
            fgets(str2,sizeof(str2),stdin);
            str2[strcspn(str2, "\n")] = '\0';
            size2=length(str2);
            //printf("%d\n",size);
            for(a=0;a<=size2;a++)
            {
                if(str2[a]>=97&&str2[a]<=122)
                {
                    printf("Already in lower case letter.");
                    break;
                }
            }  
            lwr(str2,size2);
        }
        break;
        default:
        {
            printf("Wrong choice");
        }
    }
    system("pause");
}
//Writting the function to calculate the length of the string.
int length(char st[100])
{
    int i=0;
    for(i=0;st[i]!='\0';i++);
    return i;
}
//Writting the toupper() function
void uppr(char st[100],int l)
{
    int i=0,num=0;
    for(i=0;st[i]!='\0';i++)
    {
        num=(int)st[i]-32;
        printf("%c",(char)num);
        if(st[i]==' ')
        {
            printf(" ");
        }
    }
}
//Writting the tolower() function
void lwr(char st[100],int l)
{
    int i=0,num=0;
    for(i=0;st[i]!='\0';i++)
    {
        num=(int)st[i]+32;
        printf("%c",(char)num);
        if(st[i]==' ')
        {
            printf("\b ");
            continue;
        }
    }
}