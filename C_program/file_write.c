//writting in the file.
#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *pt;
    char ch;
    pt= fopen("f1.txt","w");//opening the file.
    while(pt==NULL)
    {
        puts("Cannot not create  file.");//message if file is not found.
        fclose(pt);
        exit(1);
    }
    printf("Enter few lines,Press '!' to terminate:\n");
    while(1)
    {
        scanf("%c",&ch);//Wriitng in the file.
        fputc(ch,pt);
        if(ch=='!')//termination condition.
        {
            break;
        }
    }
    fclose(pt);
}