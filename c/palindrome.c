#include<stdio.h>
#include<conio.h>
void main()
{
    int num=0,p=0,rem=0,temp=0;
    clrscr();
    printf("Enter a number:\n");
    scanf("%d",&num);
    temp=num;
    while(temp>0)
    {
        rem=temp%10;
        p=p*10+rem;
        temp=temp/10;
    }    
    if(p==num)
    {
        printf("The number is palindrome");
    }
    else
    {
        printf("The number is not a palindrome number");
    }
    getch();
}