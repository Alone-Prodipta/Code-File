//opening a file in write mode then in read mode
#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *pt;
    char ch,str[100];//str array for printing the file in read mode,and ch for writting mode.  
    pt= fopen("f1.txt","w");//opening the file in write mode.
    if(pt==NULL)
    {
        puts("Can not open file.");//Message if the file does not exist or can not be created.
        printf("Unsuccessfully terminated.");
        fclose(pt);
        exit(1);//unsuccessful terminated.
    }
    printf("Enter few lines:\n");
    while(1)
    {
        scanf("%c",&ch);      //writting in the file 
        fputc(ch,pt);
        if(ch=='!')          //terminating if '!' is pressed.
        {
            break;
        }
    }
    fclose(pt);//closing the file.
    printf("Want to read the text\n\n");
    pt= fopen("f1.txt","r");//reopening the file.
        if(pt==NULL)
        {
            puts("Can not open file.");//message if the file does not exist.
            fclose(pt);
            exit(1);
        }
        /*The above line display the line written after pressing enter key also.*/

        while(fgets(str,100,pt)!=NULL)    //printing till the termination from the file.
        {
            printf("%s",str);
        }
        fclose(pt);
}
   
