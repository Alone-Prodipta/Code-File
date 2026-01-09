#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *pt;
    char ch[400];
    pt=fopen("f1.txt","r");//opening the file in read mode.
        if(pt==NULL)
        {
            puts("Cannot open target file");//message if file is not found.
            fclose(pt);
            exit(1);
        }
   while(fgets(ch,400,pt)!=NULL)
   {
        printf("%s",ch);//printing the lines from the file
   }
    fclose(pt);
}