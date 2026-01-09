#include<stdio.h>
void main(int argc,char *argv[])
{
    int count=0;
    if(argc==1)
    {
        printf("No argument avilable!\n");
        printf("Program name is:%s\n",argv[0]);
        printf("\n%d",argc);
        return;
    }
    else
    {
        printf("\n%d\n",argc);
        for(count=1;count<argc;count++)
        {
           printf("Program name is:%s\n",argv[count]);
        }
        for(count=1;count<argc;count++)
        {
            printf("\n Argument %d: %s",count,argv[count]);
        }
    }
}