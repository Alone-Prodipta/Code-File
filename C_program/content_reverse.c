#include<stdio.h>
void main()
{
    FILE *pt;
    char ch,ar[100];
    int i=0,c=0;
    pt= fopen("f1.txt","r");//opening the file in read mode.
    while(ch!=EOF)//running before the "End of file"
    {
        printf("%c\n",ch);//printing the charecters fron the file.
        ch= fgetc(pt);//reading the charecters from the file.
        ar[c++]=ch;//storing in the charecter array.
    }
    for(i=c-1;i>=0;i--)//running the loop in a reverse way. 
    {
        //printing the charecters stored in the array and transforming them in upper case.
        printf("%c",ar[i]-32);
    }
    //closing the file.
    fclose(pt);
}